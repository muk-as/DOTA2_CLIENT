"use strict";
/// <reference path="../dota.d.ts" />
/// <reference path="../util.ts" />
/// <reference path="../common/async.ts" />
/// <reference path="../sequence_actions.ts" />
/// <reference path="../dota_sequence_actions.ts" />
const KEY_LEFT = 90;
const KEY_RIGHT = 92;
const KEY_UP = 89;
const KEY_A = 11;
const KEY_D = 14;
const KEY_W = 33;
const KEY_SPACE = 66;
const KEY_ESCAPE = 71;
const PLAYER_GRAVITY = -1200;
const PROJECTILE_GRAVITY = -1800;
const JUMP_SPEED = 800;
const SPRING_SPEED = 1200;
const TRAMPOLINE_SPEED = 1600;
const HORIZONTAL_SPEED = 550;
const HORIZONTAL_RESPONSIVENESS = 0.05;
const WALL_JUMP_BOUNCE_SPEED_Y = 1000;
const WALL_JUMP_BOUNCE_SPEED_X = 600;
const BALLOON_BOUNCE_SPEED = 1000;
const MOVING_PLATFORM_SPEED = 100;
const VERTICAL_PLATFORM_SPEED = 75;
const VERTICAL_PLATFORM_RANGE = 90;
const DEFAULT_PLATFORM_WIDTH = 110;
const DEFAULT_PLATFORM_HEIGHT = 20;
const DEFAULT_BALLOON_WIDTH = 70;
const DEFAULT_BALLOON_HEIGHT = 90;
const DEFAULT_FINISH_PLATFORM_WIDTH = 160;
const DEFAULT_FINISH_PLATFORM_HEIGHT = DEFAULT_FINISH_PLATFORM_WIDTH * 0.188;
const TUTORIAL_PLATFORM_WIDTH = 110;
const TUTORIAL_PLATFORM_HEIGHT = TUTORIAL_PLATFORM_WIDTH * 0.792;
const WALL_PLATFORM_WIDTH = 23;
const WALL_PLATFORM_HEIGHT = WALL_PLATFORM_WIDTH * 4.6;
const SPRING_WIDTH = 25;
const TRAMPOLINE_WIDTH = 50;
const TRAMPOLINE_HEIGHT = TRAMPOLINE_WIDTH * 1.5;
const ROCKET_WIDTH = 40;
const ROCKET_HEIGHT = ROCKET_WIDTH * 1.9;
const SPIKE_WIDTH = 40;
const PLAYER_SIZE = 75;
const PROJECTILE_SPEED = 1500;
const PROJECTILE_WIDTH = 25;
const PROJECTILE_HEIGHT = PROJECTILE_WIDTH * 1.6;
const PROJECTILE_COOLDOWN = 0.8;
const ENEMY_SIZE = 100;
const ENEMY_FLYING_WIDTH = 105;
const ENEMY_FLYING_HEIGHT = ENEMY_FLYING_WIDTH * 1.07;
const ENEMY_PLATFORM_WIDTH = 65;
const ENEMY_PLATFORM_HEIGHT = ENEMY_PLATFORM_WIDTH * 1.05;
const ENEMY_TARGET_WIDTH = 256;
const ENEMY_TARGET_HEIGHT = 255;
const BLIMP_WIDTH = 330;
const BLIMP_HEIGHT = BLIMP_WIDTH * 1.388;
const ENEMY_FLY_SPEED = 150;
const ENEMY_FLY_SPAWN_PADDING = 70;
const ENEMY_FLOAT_SPAWN_PADDING = 30;
const STORY_MODE_GOAL = 12000;
const SMELTING_CAR_WIDTH = 600;
const SMELTING_CAR_HEIGHT = SMELTING_CAR_WIDTH * 1.443;
const SMOKE_CLOUD_WIDTH = 40;
const SMOKE_CLOUD_HEIGHT = 40;
const FALL_EXPLOSION_WIDTH = 150;
const FALL_EXPLOSION_HEIGHT = FALL_EXPLOSION_WIDTH * 1.3;
const WHOOSH_LINE_WIDTH = 7;
const WHOOSH_LINE_HEIGHT = WHOOSH_LINE_WIDTH * 13.05;
const LAUNCH_DELAY = 1.2;
const LAUNCH_SPEED = 1400;
const FIRST_PLATFORM_HEIGHT = 1000;
const VEC_ZERO = { x: 0, y: 0 };
const JUMP_TUTORIAL_VERTICAL_HEIGHT = 1650;
const SPIKE_TUTORIAL_VERTICAL_HEIGHT = 2400;
const ATTACK_TUTORIAL_VERTICAL_HEIGHT = 3200;
const ROCKET_DURATION = 4;
const ROCKET_SPEED = 1000;
const DEBUG_LEVEL = false;
let viewportWidth = 0;
let viewportHeight = 0;
let uiScale = 0;
let dt = 0;
let gameContainer = $("#GameContainer");
let nextId = 0;
var BlimpJumpState_t;
(function (BlimpJumpState_t) {
    BlimpJumpState_t[BlimpJumpState_t["MainMenu"] = 0] = "MainMenu";
    BlimpJumpState_t[BlimpJumpState_t["Playing"] = 1] = "Playing";
    BlimpJumpState_t[BlimpJumpState_t["Paused"] = 2] = "Paused";
    BlimpJumpState_t[BlimpJumpState_t["Dead"] = 3] = "Dead";
    BlimpJumpState_t[BlimpJumpState_t["Won"] = 4] = "Won";
})(BlimpJumpState_t || (BlimpJumpState_t = {}));
var PlayingState_t;
(function (PlayingState_t) {
    PlayingState_t[PlayingState_t["Playing"] = 0] = "Playing";
    PlayingState_t[PlayingState_t["Paused"] = 1] = "Paused";
    PlayingState_t[PlayingState_t["Dying"] = 2] = "Dying";
    PlayingState_t[PlayingState_t["Dead"] = 3] = "Dead";
})(PlayingState_t || (PlayingState_t = {}));
let gameState = {};
let blimpJumpState = BlimpJumpState_t.MainMenu;
let bFirstInitialize = true;
let bEscapePressed = false;
let currentMusic = "";
var PlatformType_t;
(function (PlatformType_t) {
    PlatformType_t[PlatformType_t["None"] = 0] = "None";
    PlatformType_t[PlatformType_t["Normal"] = 1] = "Normal";
    PlatformType_t[PlatformType_t["Moving"] = 2] = "Moving";
    PlatformType_t[PlatformType_t["Vanishing"] = 4] = "Vanishing";
    PlatformType_t[PlatformType_t["Breakable"] = 8] = "Breakable";
    PlatformType_t[PlatformType_t["WallJump"] = 16] = "WallJump";
    PlatformType_t[PlatformType_t["Balloon"] = 32] = "Balloon";
    PlatformType_t[PlatformType_t["Vertical"] = 64] = "Vertical";
    PlatformType_t[PlatformType_t["Finish"] = 128] = "Finish";
    PlatformType_t[PlatformType_t["Tutorial"] = 256] = "Tutorial";
})(PlatformType_t || (PlatformType_t = {}));
var PlatformAttachmentType_t;
(function (PlatformAttachmentType_t) {
    PlatformAttachmentType_t[PlatformAttachmentType_t["None"] = 0] = "None";
    PlatformAttachmentType_t[PlatformAttachmentType_t["Spring"] = 1] = "Spring";
    PlatformAttachmentType_t[PlatformAttachmentType_t["Trampoline"] = 2] = "Trampoline";
    PlatformAttachmentType_t[PlatformAttachmentType_t["Spikes"] = 3] = "Spikes";
    PlatformAttachmentType_t[PlatformAttachmentType_t["Rocket"] = 4] = "Rocket";
})(PlatformAttachmentType_t || (PlatformAttachmentType_t = {}));
var EnemyType_t;
(function (EnemyType_t) {
    EnemyType_t[EnemyType_t["PlatformEnemy"] = 0] = "PlatformEnemy";
    EnemyType_t[EnemyType_t["FloatEnemy"] = 1] = "FloatEnemy";
    EnemyType_t[EnemyType_t["FlyEnemy"] = 2] = "FlyEnemy";
})(EnemyType_t || (EnemyType_t = {}));
var TutorialType_t;
(function (TutorialType_t) {
    TutorialType_t[TutorialType_t["AttackTutorial"] = 0] = "AttackTutorial";
    TutorialType_t[TutorialType_t["JumpTutorial"] = 1] = "JumpTutorial";
    TutorialType_t[TutorialType_t["SpikeTutorial"] = 2] = "SpikeTutorial";
})(TutorialType_t || (TutorialType_t = {}));
function HasFlag(value, flag) {
    return (value & flag) !== 0;
}
function AddFlag(value, flag) {
    return (value | flag);
}
function PlatformClassNames(type) {
    const priority = [
        PlatformType_t.Tutorial,
        PlatformType_t.Finish,
        PlatformType_t.Balloon,
        PlatformType_t.Vanishing,
        PlatformType_t.WallJump,
        PlatformType_t.Breakable,
        PlatformType_t.Vertical,
        PlatformType_t.Moving,
        PlatformType_t.Normal,
    ];
    for (const flag of priority) {
        if (HasFlag(type, flag)) {
            return PlatformType_t[flag];
        }
    }
    return "";
}
const PlatformGen = {
    MinGapY: 50,
    MaxGapY: 150,
    MinGapX: 15,
    MaxGapX: 80,
    PlatformWidth: 100,
    PlatformHeight: 15,
};
function RollRangeFloat(range) {
    if (Array.isArray(range)) {
        return RandomFloat(range[0], range[1]);
    }
    return range;
}
function RollRangeInt(range) {
    if (Array.isArray(range)) {
        return RandomInt(range[0], range[1]);
    }
    return range;
}
const levelGenerations = [
    {
        span: FIRST_PLATFORM_HEIGHT + 3000,
        generations: [
            {
                generation: {
                    amount: [5, 8],
                    platformTypes: [
                        [PlatformType_t.Normal, 1],
                    ],
                    GapY: [30, 45],
                },
                weight: 1,
            },
        ],
    },
    {
        span: 5000,
        generations: [
            {
                generation: {
                    amount: [5, 10],
                    platformTypes: [
                        [PlatformType_t.Normal, 1],
                        [PlatformType_t.Moving, 0.2],
                    ],
                    attachmentChance: 0.1,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Spikes, 0.5],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.5,
                    GapY: [45, 65],
                },
                weight: 1,
            },
            {
                generation: {
                    amount: [3, 6],
                    platformTypes: [
                        [PlatformType_t.Vanishing, 1],
                        [PlatformType_t.Normal, 0.5],
                    ],
                    attachmentChance: 0.1,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.3,
                    GapY: [45, 65],
                },
                weight: 0.3,
            },
            {
                generation: {
                    amount: [3, 5],
                    platformTypes: [
                        [PlatformType_t.Moving, 1],
                    ],
                    attachmentChance: 0.1,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Spikes, 0.7],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.3,
                    GapY: [45, 65],
                },
                weight: 0.3,
            },
        ],
    },
    {
        span: 5000,
        generations: [
            {
                generation: {
                    amount: [3, 8],
                    platformTypes: [
                        [PlatformType_t.Normal, 0.5],
                        [PlatformType_t.Moving, 0.3],
                        [PlatformType_t.Vanishing, 0.3],
                        [AddFlag(PlatformType_t.Vanishing, PlatformType_t.Moving), 0.3],
                    ],
                    attachmentChance: 0.1,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Spikes, 0.7],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.3,
                    GapY: [60, 80],
                },
                weight: 1,
            },
            {
                generation: {
                    amount: [3, 6],
                    platformTypes: [
                        [PlatformType_t.Normal, 1],
                    ],
                    attachmentChance: 0.5,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spikes, 1],
                    ],
                    enemyChance: 0.3,
                    GapY: [60, 80],
                },
                weight: 0.4,
            },
            {
                generation: {
                    amount: [6, 8],
                    platformTypes: [
                        [PlatformType_t.Vanishing, 0.3],
                        [AddFlag(PlatformType_t.Vanishing, PlatformType_t.Moving), 0.3],
                    ],
                    attachmentChance: 0.6,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.8,
                    GapY: [60, 80],
                },
                weight: 0.4,
            },
            {
                generation: {
                    amount: [3, 6],
                    platformTypes: [
                        [PlatformType_t.Moving, 0.3],
                    ],
                    attachmentChance: 0.5,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spikes, 1],
                        [PlatformAttachmentType_t.Spring, 0.5],
                        [PlatformAttachmentType_t.Trampoline, 0.4],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.3,
                    GapY: [60, 80],
                },
                weight: 0.4,
            },
        ],
    },
    // Infinite
    {
        span: 5000,
        generations: [
            {
                generation: {
                    amount: [3, 8],
                    platformTypes: [
                        [PlatformType_t.Normal, 0.5],
                        [PlatformType_t.Moving, 0.3],
                        [PlatformType_t.Vanishing, 0.3],
                        [AddFlag(PlatformType_t.Vanishing, PlatformType_t.Moving), 0.3],
                        [PlatformType_t.WallJump, 0.3],
                    ],
                    attachmentChance: 0.1,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Spikes, 1],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.3,
                    GapY: [70, 90],
                },
                weight: 1,
            },
            {
                generation: {
                    amount: [8, 12],
                    platformTypes: [
                        [PlatformType_t.Normal, 1],
                    ],
                    attachmentChance: 0.6,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spikes, 1],
                    ],
                    enemyChance: 0.3,
                    GapY: [70, 90],
                },
                weight: 0.4,
            },
            {
                generation: {
                    amount: [6, 8],
                    platformTypes: [
                        [PlatformType_t.Vanishing, 0.3],
                        [AddFlag(PlatformType_t.Vanishing, PlatformType_t.Moving), 0.3],
                    ],
                    attachmentChance: 0.1,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                    ],
                    enemyChance: 0.8,
                    GapY: [70, 90],
                },
                weight: 0.4,
            },
            {
                generation: {
                    amount: [3, 6],
                    platformTypes: [
                        [PlatformType_t.Moving, 0.3],
                    ],
                    attachmentChance: 0.2,
                    attachmentChances: [
                        [PlatformAttachmentType_t.Spring, 1],
                        [PlatformAttachmentType_t.Trampoline, 0.5],
                        [PlatformAttachmentType_t.Rocket, 0.3],
                        [PlatformAttachmentType_t.Spikes, 1],
                    ],
                    enemyChance: 0.3,
                    GapY: [70, 90],
                },
                weight: 0.4,
            },
            {
                generation: {
                    amount: [6, 10],
                    platformTypes: [
                        [PlatformType_t.WallJump, 0.3],
                    ],
                    enemyChance: 0.3,
                    GapY: [70, 90],
                },
                weight: 0.4,
            },
            {
                generation: {
                    amount: [2, 3],
                    platformTypes: [
                        [PlatformType_t.Balloon, 1],
                    ],
                    enemyChance: 0.3,
                    GapY: [60, 90],
                },
                weight: 0.2,
            },
        ],
    },
];
class GameObject_t {
    id = 0;
    position = { x: 0, y: 0 };
    velocity = { x: 0, y: 0 };
    acceleration = { x: 0, y: 0 };
    width = 0;
    height = 0;
    element;
    hitboxScaleX = 1;
    hitboxScaleY = 1;
    hitboxOffsetY = 0;
    visualizeHitbox = false;
    debugHitbox = null;
    playerHitboxScaleX = 0.8;
    playerHitboxScaleY = 1;
    destroyed = false;
    constructor(snippet) {
        this.id = nextId++;
        this.element = $.CreatePanel("Panel", gameContainer, snippet);
        this.element.BLoadLayoutSnippet(snippet);
        gameState.gameObjects.push(this);
    }
    VisualizeHitbox() {
        this.visualizeHitbox = true;
        this.debugHitbox = new DebugHitbox_t(this);
    }
    SetWidth(width) {
        this.width = width;
        this.element.SetWidthInPixels(this.width);
    }
    SetHeight(height) {
        this.height = height;
        this.element.SetHeightInPixels(this.height);
    }
    update(dt) {
        this.velocity.x += this.acceleration.x * dt;
        this.velocity.y += this.acceleration.y * dt;
        this.position.x += this.velocity.x * dt;
        this.position.y += this.velocity.y * dt;
    }
    render() {
        let xPos = this.position.x - this.width / 2;
        let yPos = this.position.y + this.height / 2;
        yPos = yPos - gameState.scrollOffset;
        yPos = RemapVal(yPos, 0, viewportHeight, viewportHeight, 0);
        this.element.SetPositionInPixels(xPos, yPos, 0);
        this.element.ApplyStyles(true);
    }
}
class DebugHitbox_t extends GameObject_t {
    gameObject;
    constructor(gameObject) {
        super("Hitbox");
        this.gameObject = gameObject;
        this.update(0);
        this.render();
    }
    update(dt) {
        this.SetHeight(this.gameObject.height * this.gameObject.hitboxScaleY);
        this.SetWidth(this.gameObject.width * this.gameObject.hitboxScaleX);
        this.position = { ...this.gameObject.position };
        this.position.y += this.gameObject.hitboxOffsetY;
    }
}
class Player_t extends GameObject_t {
    prevPosition = { x: 0, y: 0 };
    targetSpeed = 0;
    lastFacingRight = false;
    projectileCooldownRemaining = 0;
    projectileKeyDown = false;
    startWinningTimestamp = null;
    startDyingTimestamp = null;
    diedByHazard = false;
    startedDeathLaunch = false;
    fallingDeathCameraScroll = null;
    startingDeathCameraScroll = null;
    fallExplosion = null;
    lastWhooshLine = 0;
    rocketStartedTimestamp = null;
    constructor() {
        super("Player");
        gameState.player = this;
        this.hitboxScaleX = 0.8;
        this.hitboxScaleY = 0.8;
        this.hitboxOffsetY = -5;
    }
    startRocket() {
        this.rocketStartedTimestamp = Game.GetGameTime();
    }
    IsRocketing() {
        return this.rocketStartedTimestamp != null
            && Game.GetGameTime() - this.rocketStartedTimestamp < ROCKET_DURATION
            && this.startDyingTimestamp == null
            && this.startWinningTimestamp == null;
    }
    update(dt) {
        if (this.startWinningTimestamp != null) {
            this.acceleration = { x: 0, y: 0 };
            this.velocity = { x: 0, y: 0 };
            if (Game.GetGameTime() - this.startWinningTimestamp > 1.5) {
                PlayUISoundEvent("dark_carnival.blimp_jump.music.victory");
                EndGame(true);
            }
            return;
        }
        else if (this.startDyingTimestamp != null) {
            const timestamp = this.startDyingTimestamp;
            const delta = Game.GetGameTime() - timestamp;
            if (this.diedByHazard) {
                if (delta < 0.1) {
                    this.acceleration = VEC_ZERO;
                    this.velocity = VEC_ZERO;
                }
                if (delta < 0.3)
                    this.element.SwitchClass("Stance", "Oof2");
                else if (delta < 0.4)
                    this.element.SwitchClass("Stance", "Oof");
                else if (delta < 0.5)
                    this.element.SwitchClass("Stance", "Oof2");
                else if (!IsObjectTooLow(this)) {
                    if (!this.startedDeathLaunch) {
                        this.acceleration = { x: 0, y: PLAYER_GRAVITY * 1.5 };
                        this.velocity = { x: RandomInt(150, 200) * (this.position.x / viewportWidth < 0.5 ? 1 : -1), y: 400 };
                        this.startedDeathLaunch = true;
                    }
                    if (delta < 0.6) {
                        this.element.SwitchClass("Stance", "Oof");
                    }
                    else if (delta < 0.7) {
                        this.element.SwitchClass("Stance", "Oof2");
                    }
                    super.update(dt);
                }
                else {
                    PlayUISoundEvent("dark_carnival.blimp_jump.sound.falling");
                    PlayUISoundEvent("dark_carnival.blimp_jump.music.defeat");
                    this.startDyingTimestamp = Game.GetGameTime();
                    this.diedByHazard = false;
                }
                return;
            }
            else {
                if (this.fallingDeathCameraScroll == null) {
                    this.fallingDeathCameraScroll = gameState.scrollOffset - viewportHeight - 100;
                    this.startingDeathCameraScroll = gameState.scrollOffset;
                    this.element.SwitchClass("Stance", "Oof2");
                }
                let t = delta / 0.3;
                t = t > 1 ? 1 : t;
                gameState.scrollOffset = Lerp(t, this.startingDeathCameraScroll, this.fallingDeathCameraScroll);
                if (Game.GetGameTime() - this.lastWhooshLine > 0.03 && this.fallExplosion == null) {
                    CreateWhooshLine({ x: RandomInt(0, viewportWidth), y: gameState.scrollOffset - 100 });
                    this.lastWhooshLine = Game.GetGameTime();
                }
                if (delta > 0.2 && delta < 0.8) {
                    this.acceleration = VEC_ZERO;
                    this.velocity.y = -100;
                    super.update(dt);
                }
                else if (!IsObjectTooLow(this)) {
                    this.velocity.y = -1600;
                    super.update(dt);
                    gameState.backgroundScroll -= 50 * dt;
                }
                else if (this.fallExplosion == null || !this.fallExplosion.destroyed) {
                    if (this.fallExplosion == null) {
                        const fallExplosionLocation = { x: this.position.x, y: this.position.y };
                        this.fallExplosion = CreateFallExplosion(fallExplosionLocation);
                    }
                }
                else {
                    EndGame(false);
                }
            }
        }
        else if (!gameState.hasLaunched) {
            return;
        }
        this.projectileCooldownRemaining = Math.max(0, this.projectileCooldownRemaining - dt);
        // Input
        const leftPressed = GameUI.IsKeyDown(KEY_LEFT) || GameUI.IsKeyDown(KEY_A);
        const rightPressed = GameUI.IsKeyDown(KEY_RIGHT) || GameUI.IsKeyDown(KEY_D);
        const upPressed = GameUI.IsKeyDown(KEY_UP) || GameUI.IsKeyDown(KEY_W);
        // Movement
        if (leftPressed && !rightPressed) {
            this.targetSpeed = -HORIZONTAL_SPEED;
            this.lastFacingRight = false;
        }
        else if (!leftPressed && rightPressed) {
            this.targetSpeed = HORIZONTAL_SPEED;
            this.lastFacingRight = true;
        }
        else {
            this.targetSpeed = 0;
        }
        this.velocity.x += (this.targetSpeed - this.velocity.x) * HORIZONTAL_RESPONSIVENESS;
        // Attack
        if (upPressed && !this.projectileKeyDown && this.projectileCooldownRemaining <= 0) {
            new Projectile_t(this.position, { x: this.velocity.x, y: this.IsRocketing() ? PROJECTILE_SPEED + ROCKET_SPEED / 2 : PROJECTILE_SPEED }, { x: 0, y: PROJECTILE_GRAVITY });
            this.projectileCooldownRemaining = PROJECTILE_COOLDOWN;
            PlayUISoundEvent("dark_carnival.blimp_jump.sound.throw_shiv");
        }
        this.projectileKeyDown = upPressed;
        // Collision
        if (this.startDyingTimestamp == null) {
            gameState.attachments.forEach(attachment => attachment.checkCollisionWithPlayer(this));
            gameState.enemies.forEach(enemy => enemy.checkCollisionWithPlayer(this));
            gameState.platforms.forEach(platform => platform.checkCollisionWithPlayer(this));
        }
        // Wrap
        if (this.position.x < 0) {
            this.position.x = viewportWidth;
        }
        else if (this.position.x > viewportWidth) {
            this.position.x = 0;
        }
        // Animation
        if (this.startDyingTimestamp == null) {
            this.element.SwitchClass("Direction", this.lastFacingRight ? "FacingRight" : "FacingLeft");
            this.element.SwitchClass("Stance", this.velocity.y > 0 ? "Jumping" : "Falling");
        }
        this.prevPosition = { ...this.position };
        this.element.SetHasClass("Rocketing", this.IsRocketing());
        let rocketEffect = $("#RocketEffect");
        if (this.IsRocketing()) {
            this.velocity.y = ROCKET_SPEED;
            let xPos = this.position.x - (this.lastFacingRight ? 170 : 130);
            let yPos = this.position.y + 175;
            yPos = yPos - gameState.scrollOffset;
            yPos = RemapVal(yPos, 0, viewportHeight, viewportHeight, 0);
            rocketEffect.visible = true;
            rocketEffect.SetPositionInPixels(xPos, yPos, 0);
        }
        else {
            rocketEffect.visible = false;
        }
        if (this.startDyingTimestamp == null) {
            super.update(dt);
        }
    }
}
class Platform_t extends GameObject_t {
    type = PlatformType_t.None;
    bHasBounced = false;
    movingFrame = 0;
    initialY = 0;
    verticalPhase = 0;
    prevY = 0;
    constructor(type) {
        super("Platform");
        this.type = type ? type : PlatformType_t.Normal;
        this.element.AddClass(PlatformClassNames(this.type));
        if (HasFlag(type, PlatformType_t.Moving)) {
            const sign = Math.random() > 0.5 ? 1 : -1;
            this.velocity.x = MOVING_PLATFORM_SPEED * sign;
        }
        if (HasFlag(type, PlatformType_t.Vertical)) {
            this.verticalPhase = Math.random() * Math.PI * 2;
        }
        if (HasFlag(type, PlatformType_t.Balloon)) {
            this.hitboxScaleX = 0.7;
            this.hitboxScaleY = 0.7;
            // this.hitboxOffsetY = -10;
            const balloonColors = [
                "rgb(50, 176, 247)",
                "rgb(128, 46, 192)",
                "rgb(247, 50, 129)",
                "rgb(224, 227, 35)",
                "rgb(50, 247, 231)",
            ];
            this.element.style.washColor = balloonColors[RandomInt(0, balloonColors.length)];
        }
        if (HasFlag(type, PlatformType_t.WallJump)) {
            this.hitboxScaleX = 0.3;
        }
        gameState.platforms.push(this);
    }
    update(dt) {
        this.prevY = this.position.y;
        if (HasFlag(this.type, PlatformType_t.Vertical)) {
            this.verticalPhase += dt * VERTICAL_PLATFORM_SPEED * 0.01;
            this.position.y = this.initialY + Math.sin(this.verticalPhase) * VERTICAL_PLATFORM_RANGE;
        }
        if (HasFlag(this.type, PlatformType_t.Moving)) {
            const leftEdge = this.width / 2;
            const rightEdge = viewportWidth - this.width / 2;
            if (this.position.x <= leftEdge && this.velocity.x < 0) {
                this.velocity.x *= -1;
            }
            else if (this.position.x >= rightEdge && this.velocity.x > 0) {
                this.velocity.x *= -1;
            }
        }
        if (this.type == PlatformType_t.Moving || this.type == PlatformType_t.Vertical) {
            this.movingFrame += dt * 10;
            const frame2 = Math.floor(this.movingFrame) % 2 == 0;
            this.element.SetHasClass("Frame2", frame2);
        }
        super.update(dt);
    }
    checkCollisionWithPlayer(player) {
        if (HasFlag(this.type, PlatformType_t.Vanishing) && this.bHasBounced) {
            return false;
        }
        if (HasFlag(this.type, PlatformType_t.Balloon)
            && IsOverlapping(player, this)) {
            const dx = player.position.x - this.position.x;
            const dy = player.position.y - this.position.y;
            const dist = Math.sqrt(dx * dx + dy * dy);
            const normDist = Math.max(dist, 1);
            player.velocity.x = (dx / normDist) * BALLOON_BOUNCE_SPEED;
            player.velocity.y = (dy / normDist) * BALLOON_BOUNCE_SPEED;
            this.element.TriggerClass("Bounce");
            this.bHasBounced = true;
            PlayUISoundEvent("dark_carnival.blimp_jump.sound.bounce");
            return true;
        }
        else if (player.velocity.y < 0 && IsLandingCollision(player, this)) {
            if (HasFlag(this.type, PlatformType_t.Finish)) {
                player.startWinningTimestamp = Game.GetGameTime();
                let confetti = $("#WinConfetti");
                confetti.StartParticles();
                return false;
            }
            if (HasFlag(this.type, PlatformType_t.Breakable)) {
                this.destroyed = true;
                return false;
            }
            else {
                player.velocity.y = JUMP_SPEED;
            }
            this.element.TriggerClass("Bounce");
            gameState.attachments.forEach(attachment => {
                if (attachment.parentPlatform == this) {
                    attachment.element.TriggerClass("Bounce");
                }
            });
            this.bHasBounced = true;
            if (HasFlag(this.type, PlatformType_t.Vanishing)) {
                this.element.AddClass("Vanish");
                gameState.attachments.forEach(attachment => {
                    if (attachment.parentPlatform == this) {
                        attachment.parentPlatform = null;
                        attachment.acceleration.y = PLAYER_GRAVITY;
                    }
                });
            }
            PlayUISoundEvent("dark_carnival.blimp_jump.sound.bounce");
            return true;
        }
        // Horizontal wall jump collision
        if (HasFlag(this.type, PlatformType_t.WallJump) && IsHorizontalCollision(player, this)) {
            if (player.position.x < this.position.x) {
                player.velocity.x = -WALL_JUMP_BOUNCE_SPEED_X;
                player.velocity.y = WALL_JUMP_BOUNCE_SPEED_Y;
                player.lastFacingRight = false;
            }
            else {
                player.velocity.x = WALL_JUMP_BOUNCE_SPEED_X;
                player.velocity.y = WALL_JUMP_BOUNCE_SPEED_Y;
                player.lastFacingRight = true;
            }
            PlayUISoundEvent("dark_carnival.blimp_jump.sound.bounce");
            return true;
        }
        return false;
    }
    SetTutorialType(tutorialType) {
        this.element.SwitchClass("tutorialtype", TutorialType_t[tutorialType]);
    }
}
class Projectile_t extends GameObject_t {
    rotation = 0;
    rotationSign = 1;
    constructor(position, velocity, acceleration) {
        super("Projectile");
        this.SetWidth(PROJECTILE_WIDTH);
        this.SetHeight(PROJECTILE_HEIGHT);
        this.position = { ...position };
        this.velocity = { ...velocity };
        this.acceleration = { ...acceleration };
        this.rotationSign = this.velocity.x < 0 ? -1 : 1;
        gameState.projectiles.push(this);
    }
    update(dt) {
        super.update(dt);
        if (this.position.y < gameState.scrollOffset) {
            this.destroyed = true;
            return;
        }
        // Projectile-enemy collision
        for (const enemy of gameState.enemies) {
            if (!enemy.destroyed && IsOverlapping(this, enemy)) {
                PlayUISoundEvent("dark_carnival.blimp_jump.sound.enemy_bounce");
                CreateSmokeCloud(enemy.position);
                enemy.destroyed = true;
                this.destroyed = true;
                break;
            }
        }
        for (const platform of gameState.platforms) {
            if (HasFlag(platform.type, PlatformType_t.Balloon) && IsOverlapping(this, platform)) {
                PlayUISoundEvent("dark_carnival.blimp_jump.sound.enemy_bounce");
                CreateSmokeCloud(platform.position);
                platform.destroyed = true;
                this.destroyed = true;
                break;
            }
        }
        let angle = (Math.atan2(this.velocity.y, -this.velocity.x) - Math.PI / 2) * 180 / Math.PI;
        angle = Math.abs(angle) < 0.1 ? 0 : angle;
        this.element.style.transform = "rotateZ(" + angle + "deg);";
    }
}
class Enemy_t extends GameObject_t {
    enemyType = EnemyType_t.PlatformEnemy;
    parentPlatform = null;
    movingFrame = 0;
    maxFrames = 1;
    constructor(type, parent) {
        super("Enemy");
        this.enemyType = type;
        this.parentPlatform = parent;
        this.element.AddClass(EnemyType_t[type]);
        this.playerHitboxScaleY = 1.2;
        if (type == EnemyType_t.FlyEnemy) {
            this.velocity.x = (Math.random() > 0.5 ? 1 : -1) * ENEMY_FLY_SPEED;
            this.maxFrames = 3;
            this.hitboxScaleY = 0.25;
            this.hitboxScaleX = 0.82;
            // this.hitboxOffsetY = -10;
        }
        if (type == EnemyType_t.PlatformEnemy) {
            this.maxFrames = 2;
            this.hitboxScaleX = 0.4;
            this.hitboxScaleY = 0.8;
            this.hitboxOffsetY = -5;
        }
        gameState.enemies.push(this);
    }
    update(dt) {
        if (this.enemyType == EnemyType_t.PlatformEnemy && this.parentPlatform && !this.parentPlatform.destroyed) {
            this.position.x = this.parentPlatform.position.x;
            this.position.y = this.parentPlatform.position.y + this.parentPlatform.height / 2 + this.height / 2;
        }
        if (this.enemyType == EnemyType_t.FlyEnemy) {
            const leftEdge = this.width / 2;
            const rightEdge = viewportWidth - this.width / 2;
            if (this.position.x <= leftEdge && this.velocity.x < 0) {
                this.velocity.x *= -1;
            }
            else if (this.position.x >= rightEdge && this.velocity.x > 0) {
                this.velocity.x *= -1;
            }
            this.element.SetHasClass("FacingLeft", this.velocity.x < 0);
        }
        this.movingFrame += dt * 5;
        const frameNumber = Math.floor(this.movingFrame) % this.maxFrames;
        this.element.SwitchClass("Frame", "Frame" + (frameNumber + 1));
        super.update(dt);
    }
    checkCollisionWithPlayer(player) {
        // Stomp: player falling on top of enemy
        // if ( player.velocity.y < 0 && IsLandingCollision( player, this ) )
        // {
        //     this.destroyed = true;
        //     player.velocity.y = JUMP_SPEED;
        //     PlayUISoundEvent("dark_carnival.blimp_jump.sound.enemy_bounce");
        //     CreateSmokeCloud( this.position );
        //     return true;
        // }
        if (IsOverlapping(player, this)) {
            if ((player.velocity.y < 0 && player.position.y >= (this.position.y + 30)) || player.IsRocketing()) {
                this.destroyed = true;
                if (!player.IsRocketing()) {
                    player.velocity.y = JUMP_SPEED;
                }
                PlayUISoundEvent("dark_carnival.blimp_jump.sound.enemy_bounce");
                CreateSmokeCloud(this.position);
                return true;
            }
            else {
                // Body contact: player dies
                player.startDyingTimestamp = Game.GetGameTime();
                player.diedByHazard = true;
                PlayUISoundEvent("dark_carnival.blimp_jump.sound.enemy_impact");
                return true;
            }
        }
        return false;
    }
}
class PlatformAttachment_t extends GameObject_t {
    attachmentType = PlatformAttachmentType_t.None;
    parentPlatform;
    verticalOffset = 0;
    horizontalOffset = 0;
    constructor(type, parent) {
        super("PlatformAttachment");
        this.attachmentType = type;
        this.parentPlatform = parent;
        this.element.AddClass(PlatformAttachmentType_t[type]);
        gameState.attachments.push(this);
    }
    update(dt) {
        if (this.parentPlatform != null) {
            this.position = { ...this.parentPlatform.position };
            this.position.y += this.parentPlatform.height / 2 + this.height / 2 + this.verticalOffset;
            this.position.x += this.horizontalOffset;
        }
        super.update(dt);
    }
    checkCollisionWithPlayer(player) {
        if (this.attachmentType == PlatformAttachmentType_t.Rocket && IsOverlapping(player, this)) {
            PlayUISoundEvent("dark_carnival.blimp_jump.sound.rocket");
            player.startRocket();
            this.destroyed = true;
            return true;
        }
        if (player.velocity.y > 0) {
            return false;
        }
        if (this.attachmentType == PlatformAttachmentType_t.Spikes && !IsLandingCollision(player, this)) {
            return false;
        }
        if (this.attachmentType != PlatformAttachmentType_t.Spikes && !IsOverlapping(player, this)) {
            return false;
        }
        switch (this.attachmentType) {
            case PlatformAttachmentType_t.Spikes:
                player.startDyingTimestamp = Game.GetGameTime();
                player.diedByHazard = true;
                // player.destroyed = true;
                PlayUISoundEvent("dark_carnival.blimp_jump.sound.enemy_impact");
                return true;
            case PlatformAttachmentType_t.Spring:
                player.velocity.y = SPRING_SPEED;
                PlayUISoundEvent("dark_carnival.blimp_jump.sound.spring");
                this.element.TriggerClass("Bounce");
                if (this.parentPlatform == null || !this.parentPlatform.destroyed) {
                    this.parentPlatform?.element?.TriggerClass("Bounce");
                }
                return true;
            case PlatformAttachmentType_t.Trampoline:
                PlayUISoundEvent("dark_carnival.blimp_jump.sound.trampoline");
                player.element.TriggerClass("BigJump");
                player.velocity.y = TRAMPOLINE_SPEED;
                this.element.TriggerClass("Bounce");
                return true;
        }
        return false;
    }
}
class Blimp_t extends GameObject_t {
    constructor() {
        super("Blimp");
    }
}
class SmeltingCar_t extends GameObject_t {
    amount = 0;
    frameTiming = [0.8, 0.85, 1.2, 1.25, 1.3];
    savedX = 0;
    sign = -1;
    spawnedCloud = false;
    constructor() {
        super("SmeltingCar");
        this.element.SwitchClass("frame", "Show1");
        PlayUISoundEvent("dark_carnival.blimp_jump.sound.launch_explosion");
    }
    update(dt) {
        this.amount += dt;
        if (this.amount < 0.5) {
            this.savedX = this.position.x;
        }
        for (let i = 0; i < this.frameTiming.length; i++) {
            if (this.amount < this.frameTiming[i]) {
                this.element.SwitchClass("frame", "Show" + (i + 1));
                break;
            }
            if (i == 1) {
                this.position.x = this.savedX + RandomFloat(3, 6) * this.sign;
                this.sign *= -1;
            }
            else {
                this.position.x = this.savedX;
            }
            if (this.amount >= 1.23 && !this.spawnedCloud) {
                this.spawnedCloud = true;
                CreateSmokeCloud({ x: this.position.x, y: this.position.y + 430 }, true);
            }
        }
        super.update(dt);
    }
}
class SmokeCloud_t extends GameObject_t {
    amount = 0;
    duration = 1;
    constructor() {
        super("SmokeCloud");
        this.element.SwitchClass("frame", "Show" + (RandomInt(1, 4)));
        this.element.style.transform = "rotateZ(" + RandomFloat(0, 180) + "deg);";
    }
    update(dt) {
        this.amount += dt;
        const left = Clamp((this.duration - this.amount) / this.duration, 0, 1);
        this.element.style.opacity = "" + Clamp(left, 0, 1);
        if (left <= 0) {
            this.destroyed = true;
        }
        super.update(dt);
    }
}
class FallExplosion_t extends GameObject_t {
    amount = 0;
    deadTimestamp = null;
    constructor() {
        super("FallExplosion");
        PlayUISoundEvent("dark_carnival.blimp_jump.sound.death_explosion");
    }
    update(dt) {
        this.amount += dt;
        const newIndex = Math.trunc((this.amount / 0.1) + 1);
        this.element.SwitchClass("frame", "Show" + newIndex);
        if (newIndex > 4 && this.deadTimestamp == null) {
            this.deadTimestamp = Game.GetGameTime();
            this.element.style.opacity = "0";
        }
        if (this.deadTimestamp != null && (this.deadTimestamp + 0.3) < Game.GetGameTime()) {
            this.destroyed = true;
        }
    }
}
class WhooshLine_t extends GameObject_t {
    constructor() {
        super("WhooshLine");
    }
}
function CreatePlatform(position, width, height, type) {
    let platform = new Platform_t(type);
    platform.SetWidth(width);
    platform.SetHeight(height);
    platform.position = position;
    platform.initialY = position.y;
    platform.render();
    return platform;
}
function CreatePlayer(position, velocity, width, height) {
    let player = new Player_t();
    player.SetWidth(width);
    player.SetHeight(height);
    player.position = position;
    player.velocity = velocity;
    player.acceleration = { x: 0, y: PLAYER_GRAVITY };
    player.prevPosition = player.position;
    player.targetSpeed = 0;
    player.render();
    return gameState.player;
}
function CreateEnemy(position, width, height, type, parentPlatform) {
    let enemy = new Enemy_t(type, parentPlatform);
    enemy.SetWidth(width);
    enemy.SetHeight(height);
    enemy.position = position;
    enemy.render();
    return enemy;
}
function CreateBlimp(position) {
    let blimp = new Blimp_t();
    blimp.SetWidth(BLIMP_WIDTH);
    blimp.SetHeight(BLIMP_HEIGHT);
    blimp.position = position;
    let platform = new Platform_t(PlatformType_t.Finish);
    platform.SetWidth(DEFAULT_FINISH_PLATFORM_WIDTH);
    platform.SetHeight(DEFAULT_FINISH_PLATFORM_HEIGHT);
    platform.position = { x: position.x + 20, y: position.y - BLIMP_HEIGHT / 2 - DEFAULT_FINISH_PLATFORM_HEIGHT / 2 + 2 };
    platform.initialY = platform.position.y;
    blimp.render();
    platform.render();
    return blimp;
}
function CreateSmeltingCar(position) {
    let smeltingCar = new SmeltingCar_t();
    smeltingCar.SetWidth(SMELTING_CAR_WIDTH);
    smeltingCar.SetHeight(SMELTING_CAR_HEIGHT);
    smeltingCar.position = position;
    smeltingCar.render();
    return smeltingCar;
}
function CreateSmokeCloud(position, bigCloud = false) {
    const count = bigCloud ? RandomInt(8, 12) : RandomInt(4, 7);
    const startAngle = Math.random() * Math.PI * 2;
    for (let i = 0; i < count; i++) {
        const angle = startAngle + (i / count) * Math.PI * 2 + RandomFloat(-0.3, 0.3); // ~17° jitter
        const dir = {
            x: Math.cos(angle),
            y: Math.sin(angle),
        };
        const speed = bigCloud ? RandomFloat(300, 600) : RandomFloat(100, 120);
        let smokeCloud = new SmokeCloud_t();
        smokeCloud.SetWidth(bigCloud ? SMOKE_CLOUD_WIDTH * 2 : SMOKE_CLOUD_WIDTH);
        smokeCloud.SetHeight(bigCloud ? SMOKE_CLOUD_HEIGHT * 2 : SMOKE_CLOUD_HEIGHT);
        smokeCloud.position = { ...position };
        smokeCloud.velocity.x = dir.x * speed;
        smokeCloud.velocity.y = dir.y * speed;
        smokeCloud.duration = RandomFloat(0.7, 1.0);
        smokeCloud.acceleration.x = -dir.x * 10;
        smokeCloud.acceleration.y = -dir.y * 10;
    }
}
function CreateFallExplosion(position) {
    let fallExplosion = new FallExplosion_t();
    fallExplosion.SetWidth(FALL_EXPLOSION_WIDTH);
    fallExplosion.SetHeight(FALL_EXPLOSION_HEIGHT);
    fallExplosion.position = position;
    fallExplosion.position.y += 140;
    fallExplosion.render();
    return fallExplosion;
}
function CreateWhooshLine(position) {
    let whooshLine = new WhooshLine_t();
    whooshLine.SetWidth(WHOOSH_LINE_WIDTH * RandomFloat(0.9, 1.1));
    whooshLine.SetHeight(WHOOSH_LINE_HEIGHT * RandomFloat(0.5, 4));
    whooshLine.position = position;
    whooshLine.velocity = { x: 0, y: 4000 };
    whooshLine.render();
    return whooshLine;
}
function Initialize(bInfinite) {
    $.GetContextPanel().SetFocus();
    uiScale = gameContainer.actualuiscale_x;
    viewportWidth = gameContainer.actuallayoutwidth / uiScale;
    viewportHeight = gameContainer.actuallayoutheight / uiScale;
    if (!bFirstInitialize) {
        DestroyAllGameObjects();
    }
    gameState = {
        gameObjects: [],
        player: {},
        platforms: [],
        attachments: [],
        projectiles: [],
        enemies: [],
        scrollOffset: -20,
        highestPlatformY: 0,
        lastPlatformX: 0,
        playingState: PlayingState_t.Playing,
        backgroundScroll: -3250,
        // backgroundScroll: -50,
        paused: false,
        infiniteMode: bInfinite,
        reachedBlimp: false,
        blimp: null,
        startGameTimestamp: Game.GetGameTime(),
        hasLaunched: false,
        hasSpawnedAttackTutorial: false,
        hasSpawnedJumpTutorial: false,
        hasSpawnedSpikeTutorial: false,
        horizontalAvoidRange: [0, 0],
        verticalAvoidRange: [0, 0],
        score: 0,
    };
    const SPAWN_POSITION_X = 300;
    if (DEBUG_LEVEL) {
        CreatePlatform({ x: 100, y: 800 }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal);
        CreatePlatform({ x: 300, y: 800 }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT * 2.4, PlatformType_t.Moving);
        CreatePlatform({ x: 500, y: 800 }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Vanishing);
        CreatePlatform({ x: 200, y: 650 }, WALL_PLATFORM_WIDTH, WALL_PLATFORM_HEIGHT, PlatformType_t.WallJump);
        CreatePlatform({ x: 400, y: 650 }, DEFAULT_BALLOON_WIDTH, DEFAULT_BALLOON_HEIGHT, PlatformType_t.Balloon);
        {
            const enemy = CreateEnemy({ x: 150, y: 500 }, ENEMY_FLYING_WIDTH, ENEMY_FLYING_HEIGHT, EnemyType_t.FlyEnemy, null);
            enemy.update(0);
            enemy.render();
        }
        {
            const enemy = CreateEnemy({ x: 450, y: 500 }, ENEMY_PLATFORM_WIDTH, ENEMY_PLATFORM_HEIGHT, EnemyType_t.PlatformEnemy, null);
            enemy.update(0);
            enemy.render();
        }
        {
            const platform = CreatePlatform({ x: 100, y: 300 }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal);
            CreatePlatformAttachment(platform, PlatformAttachmentType_t.Spikes);
        }
        {
            const platform = CreatePlatform({ x: 300, y: 300 }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal);
            CreatePlatformAttachment(platform, PlatformAttachmentType_t.Trampoline);
        }
        {
            const platform = CreatePlatform({ x: 500, y: 300 }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal);
            CreatePlatformAttachment(platform, PlatformAttachmentType_t.Spring);
        }
        {
            const platform = CreatePlatform({ x: 500, y: 180 }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal);
            CreatePlatformAttachment(platform, PlatformAttachmentType_t.Rocket);
        }
        {
            const platform = CreatePlatform({ x: 100, y: 100 }, TUTORIAL_PLATFORM_WIDTH, TUTORIAL_PLATFORM_HEIGHT, PlatformType_t.Tutorial);
            platform.SetTutorialType(TutorialType_t.AttackTutorial);
        }
        {
            const platform = CreatePlatform({ x: 300, y: 100 }, TUTORIAL_PLATFORM_WIDTH, TUTORIAL_PLATFORM_HEIGHT, PlatformType_t.Tutorial);
            platform.SetTutorialType(TutorialType_t.JumpTutorial);
        }
        {
            const platform = CreatePlatform({ x: 500, y: 100 }, TUTORIAL_PLATFORM_WIDTH, TUTORIAL_PLATFORM_HEIGHT, PlatformType_t.Tutorial);
            platform.SetTutorialType(TutorialType_t.SpikeTutorial);
        }
    }
    else {
        CreatePlayer({ x: SPAWN_POSITION_X, y: 350 }, { x: 0, y: 0 }, PLAYER_SIZE, PLAYER_SIZE);
        CreatePlatform({ x: SPAWN_POSITION_X, y: FIRST_PLATFORM_HEIGHT }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal);
        gameState.highestPlatformY = FIRST_PLATFORM_HEIGHT + DEFAULT_BALLOON_HEIGHT / 2;
        CreateSmeltingCar({ x: SPAWN_POSITION_X, y: 50 });
        bFirstInitialize = false;
    }
    blimpJumpState = BlimpJumpState_t.Playing;
}
function bounceY(time, bounceVelocity, gravity) {
    const period = (2 * bounceVelocity) / gravity;
    const t = time % period;
    return bounceVelocity * t - 0.5 * gravity * t * t;
}
function isBounceGoingDown(time, bounceVelocity, gravity) {
    const period = (2 * bounceVelocity) / gravity;
    const t = time % period;
    return t > period * 0.5;
}
function UpdatePanelClass() {
    $.GetContextPanel().SwitchClass("BlimpJumpState", "BlimpJumpState_" + BlimpJumpState_t[blimpJumpState]);
    const additionalClass = (() => {
        switch (blimpJumpState) {
            case BlimpJumpState_t.MainMenu:
                {
                    return "GameSetup";
                }
            case BlimpJumpState_t.Playing:
                {
                    return "GameRunning";
                }
            case BlimpJumpState_t.Paused:
                {
                    return "IsPaused";
                }
            case BlimpJumpState_t.Won:
            case BlimpJumpState_t.Dead:
                {
                    return "GameFinished";
                }
        }
    })();
    $.GetContextPanel().SwitchClass("BlimpJumpState2", additionalClass);
    $.GetContextPanel().SwitchClass("ConfettiState", gameState?.player?.startWinningTimestamp != null ? "ShowConfetti" : "");
    $.GetContextPanel().SwitchClass("InfiniteOrStory", gameState?.infiniteMode ? "BlimpJump_Infinite" : "BlimpJump_Story");
}
function PickMusic() {
    if (blimpJumpState == BlimpJumpState_t.Won)
        return "dark_carnival.blimp_jump.music.victory";
    if (blimpJumpState == BlimpJumpState_t.Dead)
        return "dark_carnival.blimp_jump.sound.null";
    if (blimpJumpState == BlimpJumpState_t.MainMenu)
        return "dark_carnival.blimp_jump.music.mainmenu";
    return "dark_carnival.blimp_jump.music.playing";
}
let currentMusicGuid = 0;
function UpdateMusic() {
    const music = PickMusic();
    if (currentMusic == music)
        return;
    StopUISoundEvent(currentMusicGuid);
    currentMusicGuid = PlayUISoundEvent(music);
    currentMusic = music;
}
function EventExit() {
    StopUISoundEvent(currentMusicGuid);
    $.DispatchEvent("DOTAEncounterMinigameExit");
}
function EventUpdate() {
    UpdatePanelClass();
    UpdateMusic();
    uiScale = gameContainer.actualuiscale_x;
    viewportWidth = gameContainer.actuallayoutwidth / uiScale;
    viewportHeight = gameContainer.actuallayoutheight / uiScale;
    if (viewportWidth <= 0) {
        return;
    }
    dt = Game.GetGameFrameTime();
    if (DEBUG_LEVEL) {
        gameState.gameObjects.forEach((gameObject) => gameObject.update(dt));
        return;
    }
    switch (blimpJumpState) {
        case BlimpJumpState_t.MainMenu:
            {
                let slarkPanel = $("#MainMenuSlark");
                if (slarkPanel) {
                    const y = -10 + -bounceY(Game.GetGameTime(), 700, 1200);
                    slarkPanel.style.y = y + "px";
                    slarkPanel.ApplyStyles(false);
                    slarkPanel.SwitchClass("Stance", isBounceGoingDown(Game.GetGameTime(), 700, 1200) ? "Falling" : "Jumping");
                }
                return;
            }
        case BlimpJumpState_t.Playing:
            {
                UpdateGameLogic();
                break;
            }
        case BlimpJumpState_t.Paused:
            {
                if (!bEscapePressed && GameUI.IsKeyDown(KEY_ESCAPE)) {
                    Unpause();
                }
                break;
            }
        case BlimpJumpState_t.Dead:
            {
                if (GameUI.IsKeyDown(KEY_SPACE)) {
                    StartBlimpJump(gameState.infiniteMode);
                }
                break;
            }
        case BlimpJumpState_t.Won:
            {
                break;
            }
    }
    bEscapePressed = GameUI.IsKeyDown(KEY_ESCAPE);
}
function UpdateGameLogic() {
    gameState.gameObjects.forEach((gameObject) => gameObject.update(dt));
    while (gameState.highestPlatformY < gameState.scrollOffset + 1000 && !gameState.reachedBlimp) {
        SpawnGeneration(GetCurrentGeneration());
    }
    // Camera
    {
        if (gameState.player.startDyingTimestamp == null) {
            let newScrollOffset = Math.max(gameState.scrollOffset, gameState.player.position.y - 430);
            if (gameState.blimp != null) {
                let maxCameraPosition = gameState.blimp.position.y - (viewportHeight - BLIMP_HEIGHT / 2);
                newScrollOffset = Math.min(newScrollOffset, maxCameraPosition);
            }
            const scrollOffsetDelta = newScrollOffset - gameState.scrollOffset;
            gameState.scrollOffset = newScrollOffset;
            gameState.backgroundScroll += scrollOffsetDelta * 0.1;
        }
        let background = $("#BackdropNormal");
        if (background) {
            background.style.backgroundPosition = "70% " + gameState.backgroundScroll + "px";
            background.ApplyStyles(false);
        }
        let backgroundRepeating = $("#BackdropRepeating");
        if (backgroundRepeating) {
            const pixelPosition = gameState.backgroundScroll - 3626;
            backgroundRepeating.style.backgroundPosition = "70% " + pixelPosition + "px";
            backgroundRepeating.ApplyStyles(false);
        }
        let backgroundLeft = $("#BackdropLeft");
        if (backgroundLeft) {
            backgroundLeft.style.backgroundPosition = "0px " + gameState.backgroundScroll.toString() + "px";
            backgroundLeft.ApplyStyles(false);
        }
        let backgroundRight = $("#BackdropRight");
        if (backgroundRight) {
            backgroundRight.style.backgroundPosition = "0px " + gameState.backgroundScroll.toString() + "px";
            backgroundRight.ApplyStyles(false);
        }
    }
    if (!gameState.hasLaunched) {
        if (gameState.startGameTimestamp + LAUNCH_DELAY < Game.GetGameTime()) {
            gameState.player.velocity = { x: 0, y: LAUNCH_SPEED };
            gameState.hasLaunched = true;
        }
    }
    DestroyGameObjectsTooLow();
    CleanupDestroyedObjects();
    gameState.gameObjects.forEach(gameObject => gameObject.render());
    if (gameState.infiniteMode && gameState.player.startDyingTimestamp == null) {
        gameState.score = Math.max(gameState.score, gameState.scrollOffset + 20);
        $.GetContextPanel().SetDialogVariableInt("score", gameState.score);
    }
    $.GetContextPanel().SetHasClass("HidePostGameScore", !gameState.infiniteMode);
    // Progress Bar
    if (gameState.player.startDyingTimestamp == null) {
        const progress = gameState.scrollOffset;
        const goal = STORY_MODE_GOAL - (viewportHeight - BLIMP_HEIGHT / 2);
        const progressPanel = $("#ProgressContainer");
        const height = progressPanel?.desiredlayoutheight / progressPanel?.actualuiscale_y;
        $("#Progress")?.SetHeightInPixels((progress / goal) * height);
    }
    if (gameState.player.destroyed) {
        EndGame(false);
        return;
    }
    else if (!bEscapePressed && GameUI.IsKeyDown(KEY_ESCAPE)) {
        Pause();
        return;
    }
}
function IsOverlapping(a, b) {
    const aWidth = a.width * a.hitboxScaleX;
    const aHeight = a.height * a.hitboxScaleY;
    const bWidth = b.width * b.hitboxScaleX;
    const bHeight = b.height * b.hitboxScaleY;
    return (Math.abs(a.position.x - b.position.x) < (aWidth + bWidth) * 0.5 &&
        Math.abs(a.position.y - b.position.y) < (aHeight + bHeight) * 0.5);
}
function IsLandingCollision(player, gameObject) {
    const gameObjectWidth = gameObject.width * gameObject.hitboxScaleX;
    const gameObjectHeight = gameObject.height * gameObject.hitboxScaleY;
    const playerWidth = player.width * gameObject.playerHitboxScaleX;
    const playerHeight = player.height * gameObject.playerHitboxScaleY;
    const halfP = playerHeight / 2;
    const halfB = gameObjectHeight / 2;
    const horizontal = Math.abs(player.position.x - gameObject.position.x) <
        (playerWidth + gameObjectWidth) / 2;
    if (!horizontal) {
        return false;
    }
    const playerPrevBottom = player.prevPosition.y - halfP;
    const playerCurrBottom = player.position.y - halfP;
    const platformTop = gameObject.position.y + halfB + gameObject.hitboxOffsetY;
    const STOMP_TOLERANCE = 8;
    const crossedTop = playerPrevBottom >= platformTop && playerCurrBottom <= platformTop + STOMP_TOLERANCE;
    if (crossedTop) {
        return true;
    }
    // Swept check for moving/vertical platforms: did the platform top cross the player?
    const platformPrevY = gameObject.prevY ?? gameObject.position.y;
    const platformPrevTop = platformPrevY + halfB + gameObject.hitboxOffsetY;
    const swept = playerPrevBottom >= platformPrevTop &&
        playerCurrBottom <= platformTop;
    return swept;
}
function IsHorizontalCollision(player, gameObject) {
    const playerPrevLeft = player.prevPosition.x - player.width / 2;
    const playerPrevRight = player.prevPosition.x + player.width / 2;
    const playerCurrLeft = player.position.x - player.width / 2;
    const playerCurrRight = player.position.x + player.width / 2;
    const platformLeft = gameObject.position.x - gameObject.width / 2;
    const platformRight = gameObject.position.x + gameObject.width / 2;
    const vertical = Math.abs(player.position.y - gameObject.position.y) <
        (player.height + gameObject.height) * 0.5;
    const crossedLeft = playerPrevRight <= platformLeft && playerCurrRight >= platformLeft;
    const crossedRight = playerPrevLeft >= platformRight && playerCurrLeft <= platformRight;
    return vertical && (crossedLeft || crossedRight);
}
function RandomFloat(lbound, ubound) {
    return Math.min(ubound - lbound, Math.random() * (ubound - lbound)) + lbound;
}
function RandomInt(lbound, ubound) {
    return Math.floor(RandomFloat(lbound, ubound));
}
function randomExcludingRange(min, max, excludeMin, excludeMax) {
    const count = (max - min + 1) - (excludeMax - excludeMin + 1);
    const n = Math.floor(Math.random() * count);
    if (n < excludeMin - min) {
        return min + n;
    }
    return excludeMax + 1 + (n - (excludeMin - min));
}
function CheckTutorialSpawn(currentY) {
    if (!gameState.hasSpawnedAttackTutorial) {
        if (currentY > ATTACK_TUTORIAL_VERTICAL_HEIGHT) {
            gameState.hasSpawnedAttackTutorial = true;
            return TutorialType_t.AttackTutorial;
        }
    }
    if (!gameState.hasSpawnedSpikeTutorial) {
        if (currentY > SPIKE_TUTORIAL_VERTICAL_HEIGHT) {
            gameState.hasSpawnedSpikeTutorial = true;
            return TutorialType_t.SpikeTutorial;
        }
    }
    if (!gameState.hasSpawnedJumpTutorial) {
        if (currentY > JUMP_TUTORIAL_VERTICAL_HEIGHT) {
            gameState.hasSpawnedJumpTutorial = true;
            return TutorialType_t.JumpTutorial;
        }
    }
    return null;
}
function PickWeightedPlatformType(platformTypes) {
    const filtered = platformTypes.filter(([type]) => type != PlatformType_t.None);
    let totalWeight = 0;
    for (const [, weight] of filtered) {
        totalWeight += weight;
    }
    let roll = Math.random() * totalWeight;
    for (const [type, weight] of filtered) {
        roll -= weight;
        if (roll <= 0) {
            return type;
        }
    }
    return filtered[0][0];
}
function PickWeightedAttachmentType(attachmentChances) {
    const filtered = attachmentChances.filter(([type]) => type != PlatformAttachmentType_t.Rocket || gameState.infiniteMode);
    let totalWeight = 0;
    for (const [, weight] of filtered) {
        totalWeight += weight;
    }
    let roll = Math.random() * totalWeight;
    for (const [type, weight] of filtered) {
        roll -= weight;
        if (roll <= 0) {
            return type;
        }
    }
    return PlatformAttachmentType_t.None;
}
function PickWeightedEnemyType(enemyChances) {
    let totalWeight = 0;
    for (const [, weight] of enemyChances) {
        totalWeight += weight;
    }
    let roll = Math.random() * totalWeight;
    for (const [type, weight] of enemyChances) {
        roll -= weight;
        if (roll <= 0) {
            return type;
        }
    }
    return enemyChances[0][0];
}
function CreatePlatformAttachment(platform, type) {
    const platformWidth = platform.width / 2;
    let attachment = new PlatformAttachment_t(type, platform);
    switch (type) {
        case PlatformAttachmentType_t.Spikes:
            {
                attachment.SetWidth(SPIKE_WIDTH);
                attachment.SetHeight(SPIKE_WIDTH);
                attachment.verticalOffset = platform.type == PlatformType_t.WallJump ? -9 : -12;
                attachment.hitboxScaleX = 0.4;
                attachment.hitboxScaleY = 0.5;
                attachment.playerHitboxScaleX = 0.6;
                if (!HasFlag(platform.type, PlatformType_t.WallJump) && !HasFlag(platform.type, PlatformType_t.Tutorial)) {
                    const attachmentRange = RandomInt(1, 4) - 2;
                    attachment.horizontalOffset = attachmentRange * 30;
                }
                break;
            }
        case PlatformAttachmentType_t.Spring:
            {
                attachment.SetWidth(SPRING_WIDTH);
                attachment.SetHeight(SPRING_WIDTH);
                const attachmentRange = platformWidth - SPRING_WIDTH - 5;
                attachment.horizontalOffset = RandomInt(-attachmentRange, attachmentRange);
                break;
            }
        case PlatformAttachmentType_t.Trampoline:
            {
                attachment.SetWidth(TRAMPOLINE_WIDTH);
                attachment.SetHeight(TRAMPOLINE_HEIGHT);
                attachment.hitboxScaleY = 0.3;
                attachment.hitboxOffsetY = -25;
                const attachmentRange = platformWidth - TRAMPOLINE_WIDTH - 5;
                attachment.horizontalOffset = RandomInt(-attachmentRange, attachmentRange);
                break;
            }
        case PlatformAttachmentType_t.Rocket:
            {
                attachment.SetWidth(ROCKET_WIDTH);
                attachment.SetHeight(ROCKET_HEIGHT);
                attachment.verticalOffset = 0;
                break;
            }
    }
    attachment.position = { x: platform.position.x, y: platform.position.y };
    attachment.position.y += platform.height / 2 + attachment.height / 2 + attachment.verticalOffset;
    attachment.render();
    return attachment.height;
}
function SpawnGeneration(generation) {
    const amount = RollRangeInt(generation.amount);
    const previous = gameState.platforms[gameState.platforms.length - 1];
    let currentY = gameState.highestPlatformY;
    let platformToSpawnEnemy = null;
    if (Math.random() < (generation.enemyChance ?? 0)) {
        platformToSpawnEnemy = RandomInt(0, amount - 1);
    }
    for (let i = 0; i < amount; i++) {
        if (!gameState.infiniteMode && !gameState.reachedBlimp && currentY >= STORY_MODE_GOAL) {
            gameState.reachedBlimp = true;
            gameState.blimp = CreateBlimp({ x: viewportWidth / 2, y: currentY + BLIMP_HEIGHT * .75 });
            return;
        }
        const gapY = RollRangeFloat(generation.GapY);
        currentY += gapY;
        let type = PickWeightedPlatformType(generation.platformTypes);
        let tutorialSpawn = CheckTutorialSpawn(currentY);
        if (tutorialSpawn == TutorialType_t.AttackTutorial) {
            type = PlatformType_t.Tutorial;
        }
        let width;
        let height;
        if (HasFlag(type, PlatformType_t.WallJump)) {
            width = WALL_PLATFORM_WIDTH;
            height = WALL_PLATFORM_HEIGHT;
        }
        else if (HasFlag(type, PlatformType_t.Balloon)) {
            width = DEFAULT_BALLOON_WIDTH;
            height = DEFAULT_BALLOON_HEIGHT;
        }
        else if (type == PlatformType_t.Moving || type == PlatformType_t.Vertical) {
            width = DEFAULT_PLATFORM_WIDTH;
            height = DEFAULT_PLATFORM_HEIGHT * 2.4;
        }
        else if (type == PlatformType_t.Tutorial) {
            width = TUTORIAL_PLATFORM_WIDTH;
            height = TUTORIAL_PLATFORM_HEIGHT;
        }
        else {
            width = generation.PlatformWidth ? RollRangeFloat(generation.PlatformWidth) : DEFAULT_PLATFORM_WIDTH;
            height = generation.PlatformHeight ? RollRangeInt(generation.PlatformHeight) : DEFAULT_PLATFORM_HEIGHT;
        }
        currentY += height / 2;
        let getXCandidate = () => {
            let x = 300;
            if (gameState.verticalAvoidRange[0] < currentY && currentY < gameState.verticalAvoidRange[1]) {
                x = randomExcludingRange(width / 2, viewportWidth - width / 2, gameState.horizontalAvoidRange[0], gameState.horizontalAvoidRange[1]);
            }
            else if (tutorialSpawn == TutorialType_t.AttackTutorial) {
                x = RandomInt(100, 400);
            }
            else {
                x = RandomInt(0 + width / 2, viewportWidth - width / 2);
            }
            return x;
        };
        const candidates = 2;
        let x = getXCandidate();
        let bestScore = -Infinity;
        for (let i = 0; i < candidates; i++) {
            const candidateX = getXCandidate();
            let score = Math.abs(candidateX - gameState.lastPlatformX);
            if (score > bestScore) {
                bestScore = score;
                x = candidateX;
            }
        }
        const platform = CreatePlatform({ x: x, y: currentY }, width, height, type);
        if (tutorialSpawn != null) {
            platform.SetTutorialType(tutorialSpawn);
        }
        currentY += height / 2;
        if (generation.attachmentChance
            && Math.random() < generation.attachmentChance
            && generation.attachmentChances
            && !HasFlag(type, PlatformType_t.Breakable)
            && !HasFlag(type, PlatformType_t.Balloon)
            && !HasFlag(type, PlatformType_t.WallJump)
            && platformToSpawnEnemy != i) {
            const attachmentType = PickWeightedAttachmentType(generation.attachmentChances);
            if (attachmentType != PlatformAttachmentType_t.None) {
                currentY += CreatePlatformAttachment(platform, attachmentType);
            }
        }
        // else if ( HasFlag( type, PlatformType_t.WallJump))
        // {
        //     currentY += CreatePlatformAttachment( platform, PlatformAttachmentType_t.Spikes );
        // }
        if (platformToSpawnEnemy == i) {
            let enemyType = null;
            if (HasFlag(type, PlatformType_t.Breakable)
                || HasFlag(type, PlatformType_t.WallJump)
                || HasFlag(type, PlatformType_t.Vanishing)) {
                enemyType = Math.random() < 0.5 ? EnemyType_t.FlyEnemy : EnemyType_t.FloatEnemy;
            }
            else {
                enemyType = Math.random() < 0.5 ? EnemyType_t.PlatformEnemy :
                    Math.random() < 0.5 ? EnemyType_t.FlyEnemy : EnemyType_t.FloatEnemy;
            }
            switch (enemyType) {
                case EnemyType_t.FlyEnemy:
                    CreateEnemy({ x: RandomInt(ENEMY_FLYING_WIDTH, viewportWidth - ENEMY_FLYING_WIDTH), y: currentY + ENEMY_FLY_SPAWN_PADDING }, ENEMY_FLYING_WIDTH, ENEMY_FLYING_HEIGHT, EnemyType_t.FlyEnemy, null);
                    currentY += ENEMY_FLY_SPAWN_PADDING * 1.5;
                    break;
                case EnemyType_t.FloatEnemy:
                    const x = RandomInt(DEFAULT_BALLOON_WIDTH, viewportWidth - DEFAULT_BALLOON_WIDTH / 2);
                    const y = currentY + ENEMY_FLOAT_SPAWN_PADDING + DEFAULT_BALLOON_HEIGHT / 2;
                    CreatePlatform({ x: x, y: y }, DEFAULT_BALLOON_WIDTH, DEFAULT_BALLOON_HEIGHT, PlatformType_t.Balloon);
                    gameState.horizontalAvoidRange = [x - DEFAULT_BALLOON_WIDTH * 1.5, x + DEFAULT_BALLOON_WIDTH * 1.5];
                    gameState.verticalAvoidRange = [y - DEFAULT_BALLOON_HEIGHT / 2 - ENEMY_FLOAT_SPAWN_PADDING, y + DEFAULT_BALLOON_HEIGHT / 2 + ENEMY_FLOAT_SPAWN_PADDING];
                    currentY += DEFAULT_BALLOON_HEIGHT;
                    break;
                case EnemyType_t.PlatformEnemy:
                    CreateEnemy({ x: RandomInt(ENEMY_PLATFORM_WIDTH, viewportWidth - ENEMY_PLATFORM_WIDTH), y: currentY }, ENEMY_PLATFORM_WIDTH, ENEMY_PLATFORM_HEIGHT, EnemyType_t.PlatformEnemy, platform);
                    currentY += ENEMY_PLATFORM_HEIGHT * 1.5;
                    break;
            }
        }
        if (tutorialSpawn == TutorialType_t.AttackTutorial) {
            const balloonSpawn = currentY + 350;
            CreatePlatform({ x: x, y: balloonSpawn }, DEFAULT_BALLOON_WIDTH, DEFAULT_BALLOON_HEIGHT, PlatformType_t.Balloon);
            gameState.horizontalAvoidRange = [x - DEFAULT_BALLOON_WIDTH * 1.5, x + DEFAULT_BALLOON_WIDTH * 1.5];
            gameState.verticalAvoidRange = [currentY, balloonSpawn + DEFAULT_BALLOON_HEIGHT + ENEMY_FLOAT_SPAWN_PADDING];
        }
        else if (tutorialSpawn == TutorialType_t.SpikeTutorial) {
            currentY = HandleSpikeTutorialSpawn(x, currentY);
        }
        else if (tutorialSpawn == TutorialType_t.JumpTutorial) {
            currentY = HandleJumpTutorialSpawn(x, currentY);
        }
        gameState.lastPlatformX = x;
    }
    gameState.highestPlatformY = currentY;
}
function HandleJumpTutorialSpawn(x, currentY) {
    currentY += TUTORIAL_PLATFORM_HEIGHT / 2 + 30;
    x = 400;
    const tutorialPlatform = CreatePlatform({ x: x, y: currentY }, TUTORIAL_PLATFORM_WIDTH, TUTORIAL_PLATFORM_HEIGHT, PlatformType_t.Tutorial);
    tutorialPlatform.SetTutorialType(TutorialType_t.JumpTutorial);
    CreatePlatform({ x: 190, y: currentY }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal);
    CreateEnemy({ x: RandomInt(ENEMY_PLATFORM_WIDTH, viewportWidth - ENEMY_PLATFORM_WIDTH), y: currentY }, ENEMY_PLATFORM_WIDTH, ENEMY_PLATFORM_HEIGHT, EnemyType_t.PlatformEnemy, tutorialPlatform);
    currentY += ENEMY_PLATFORM_HEIGHT * 1.5;
    gameState.horizontalAvoidRange = [x - TUTORIAL_PLATFORM_WIDTH, x + TUTORIAL_PLATFORM_WIDTH];
    gameState.verticalAvoidRange = [currentY, currentY + 100];
    return currentY;
}
function HandleSpikeTutorialSpawn(x, currentY) {
    const originalCurrentY = currentY;
    // currentY += 30;
    currentY += TUTORIAL_PLATFORM_HEIGHT / 2 + 30;
    x = 150;
    // const normalPlatform = CreatePlatform( { x: x, y: currentY }, DEFAULT_PLATFORM_WIDTH, DEFAULT_PLATFORM_HEIGHT, PlatformType_t.Normal );
    // currentY += 80;
    const tutorialPlatform = CreatePlatform({ x: x, y: currentY + 80 }, TUTORIAL_PLATFORM_WIDTH, TUTORIAL_PLATFORM_HEIGHT, PlatformType_t.Tutorial);
    tutorialPlatform.SetTutorialType(TutorialType_t.SpikeTutorial);
    currentY += CreatePlatformAttachment(tutorialPlatform, PlatformAttachmentType_t.Spikes);
    // currentY += TUTORIAL_PLATFORM_HEIGHT / 2 + 30;
    gameState.horizontalAvoidRange = [x - TUTORIAL_PLATFORM_WIDTH, x + TUTORIAL_PLATFORM_WIDTH];
    gameState.verticalAvoidRange = [originalCurrentY, currentY + 110 + TUTORIAL_PLATFORM_HEIGHT];
    return currentY;
}
function GetCurrentGeneration() {
    let levelGeneration = (() => {
        let accumulatedSpan = 0;
        for (const levelGeneration of levelGenerations) {
            accumulatedSpan += levelGeneration.span;
            if (gameState.highestPlatformY < accumulatedSpan) {
                return levelGeneration;
            }
        }
        // Clamp to last generation
        return levelGenerations[levelGenerations.length - 1];
    })();
    const totalWeight = levelGeneration.generations.reduce((sum, entry) => sum + entry.weight, 0);
    let roll = Math.random() * totalWeight;
    for (const entry of levelGeneration.generations) {
        roll -= entry.weight;
        if (roll <= 0)
            return entry.generation;
    }
    const index = Math.floor(Math.random() * levelGeneration.generations.length);
    return levelGeneration.generations[index].generation;
}
function SpawnNextPlatform() {
    const previous = gameState.platforms[gameState.platforms.length - 1];
    const centerX = viewportWidth / 2;
    const dx = previous.position.x - centerX;
    const inwardForce = -dx * 0.15;
    const gapY = RandomInt(PlatformGen.MinGapY, PlatformGen.MaxGapY);
    const direction = Math.random() < 0.5 ? -1 : 1;
    // const gapX = RandomInt( PlatformGen.MinGapX, PlatformGen.MaxGapX);
    const gapX = RandomInt(0 + PlatformGen.PlatformWidth / 2, viewportWidth - PlatformGen.PlatformWidth / 2);
    let x = gapX; //* direction + inwardForce;
    // x = Clamp( x, 0, viewportWidth - PlatformGen.PlatformWidth);
    const y = previous.position.y + gapY;
    const type = Math.random() < 0.7 ? PlatformType_t.Normal : Math.random() < 0.5 ? PlatformType_t.Vanishing : PlatformType_t.Moving;
    const platform = CreatePlatform({ x: x, y: y }, PlatformGen.PlatformWidth, PlatformGen.PlatformHeight, type);
    if ((type & PlatformType_t.Normal) != 0) {
        if (Math.random() < 0.07) {
            const additionalType = Math.random() < 0.7 ? PlatformAttachmentType_t.Spring : PlatformAttachmentType_t.Trampoline;
            CreatePlatformAttachment(platform, additionalType);
        }
    }
    gameState.highestPlatformY = y;
}
function CleanupDestroyedObjects() {
    gameState.gameObjects.filter(gameObject => gameObject.destroyed).forEach(gameObject => { gameObject.element?.DeleteAsync(0.0); });
    gameState.gameObjects = gameState.gameObjects.filter(gameObject => !gameObject.destroyed);
    gameState.platforms = gameState.platforms.filter(gameObject => !gameObject.destroyed);
    gameState.attachments = gameState.attachments.filter(attachment => !attachment.destroyed);
    gameState.projectiles = gameState.projectiles.filter(projectile => !projectile.destroyed);
    gameState.enemies = gameState.enemies.filter(enemy => !enemy.destroyed);
}
function DestroyGameObjectsTooLow() {
    gameState.gameObjects.forEach(gameObject => {
        if (gameObject.destroyed) {
            return;
        }
        if (gameObject instanceof WhooshLine_t || gameObject instanceof DebugHitbox_t) {
            return;
        }
        if (gameObject instanceof Platform_t) {
            if (gameObject.type == PlatformType_t.Vertical) {
                if (gameObject.position.y < gameState.scrollOffset - gameObject.height / 2 - 200) {
                    gameObject.destroyed = true;
                    return;
                }
            }
        }
        if (IsObjectTooLow(gameObject)) {
            if (gameObject instanceof Player_t) {
                const player = gameObject;
                if (player.startDyingTimestamp == null) {
                    player.startDyingTimestamp = Game.GetGameTime();
                    PlayUISoundEvent("dark_carnival.blimp_jump.sound.falling");
                    PlayUISoundEvent("dark_carnival.blimp_jump.music.defeat");
                }
                return;
            }
            gameObject.destroyed = true;
        }
    });
}
function IsObjectTooLow(gameObject) {
    return gameObject.position.y < gameState.scrollOffset - gameObject.height / 2;
}
function DestroyAllGameObjects() {
    gameState.gameObjects.forEach(gameObject => gameObject.destroyed = true);
    CleanupDestroyedObjects();
}
function StartBlimpJump(bInfinite) {
    Initialize(bInfinite);
    $.DispatchEvent("DOTAEncounterMinigameStart");
}
function Pause() {
    blimpJumpState = BlimpJumpState_t.Paused;
}
function Unpause() {
    blimpJumpState = BlimpJumpState_t.Playing;
}
function EndGame(bWon) {
    blimpJumpState = bWon ? BlimpJumpState_t.Won : BlimpJumpState_t.Dead;
    $.GetContextPanel().SetDialogVariableLocString("post_game_title", bWon ? "#DOTA_DarkCarnival_BlimpJump_PostGame_Title_Won" : "#DOTA_DarkCarnival_BlimpJump_PostGame_Title_Lost");
    $.GetContextPanel().SetDialogVariableLocString("post_game_subtitle", bWon ? "#DOTA_DarkCarnival_BlimpJump_PostGame_Subtitle_Won" :
        gameState.infiniteMode ? "#DOTA_DarkCarnival_BlimpJump_PostGame_Subtitle_Lost" : "#DOTA_DarkCarnival_BlimpJump_PostGame_Subtitle_LostStoryMode");
    if (!gameState.infiniteMode) {
        if (bWon) {
            $.DispatchEvent("DOTADarkCarnivalBlimpJumpRecordScore", 1);
        }
    }
    else {
        $.DispatchEvent("DOTADarkCarnivalBlimpJumpRecordScore", gameState.score);
    }
    $("#PlayAgainStory").visible = !bWon && !gameState.infiniteMode;
    $("#PlayAgainInfinite").visible = !bWon && gameState.infiniteMode;
    $("#GoInfiniteButton").visible = bWon;
    $("#LeaveEncounterButton").visible = bWon;
}
$.RegisterForUnhandledEvent("DOTAEncounterFrame", EventUpdate);
// $.GetContextPanel().SwitchClass("BlimpJumpState", "BlimpJumpState_" + BlimpJumpState_t[blimpJumpState]);
// $.GetContextPanel().SwitchClass("BlimpJumpState", "BlimpJumpState_MainMenu");
// StartBlimpJump( false );
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFya19jYXJuaXZhbF9lbmNvdW50ZXJfYmxpbXBfanVtcC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2V2ZW50cy9kYXJrX2Nhcm5pdmFsX2VuY291bnRlcl9ibGltcF9qdW1wLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLDJDQUEyQztBQUMzQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBRXBELE1BQU0sUUFBUSxHQUFHLEVBQUUsQ0FBQztBQUNwQixNQUFNLFNBQVMsR0FBRyxFQUFFLENBQUM7QUFDckIsTUFBTSxNQUFNLEdBQUcsRUFBRSxDQUFDO0FBQ2xCLE1BQU0sS0FBSyxHQUFHLEVBQUUsQ0FBQztBQUNqQixNQUFNLEtBQUssR0FBRyxFQUFFLENBQUM7QUFDakIsTUFBTSxLQUFLLEdBQUcsRUFBRSxDQUFDO0FBQ2pCLE1BQU0sU0FBUyxHQUFHLEVBQUUsQ0FBQztBQUNyQixNQUFNLFVBQVUsR0FBRyxFQUFFLENBQUM7QUFFdEIsTUFBTSxjQUFjLEdBQUcsQ0FBQyxJQUFJLENBQUM7QUFDN0IsTUFBTSxrQkFBa0IsR0FBRyxDQUFDLElBQUksQ0FBQztBQUVqQyxNQUFNLFVBQVUsR0FBRyxHQUFHLENBQUM7QUFDdkIsTUFBTSxZQUFZLEdBQUcsSUFBSSxDQUFDO0FBQzFCLE1BQU0sZ0JBQWdCLEdBQUcsSUFBSSxDQUFDO0FBRTlCLE1BQU0sZ0JBQWdCLEdBQUcsR0FBRyxDQUFDO0FBQzdCLE1BQU0seUJBQXlCLEdBQUcsSUFBSSxDQUFDO0FBRXZDLE1BQU0sd0JBQXdCLEdBQUcsSUFBSSxDQUFDO0FBQ3RDLE1BQU0sd0JBQXdCLEdBQUcsR0FBRyxDQUFDO0FBRXJDLE1BQU0sb0JBQW9CLEdBQUcsSUFBSSxDQUFDO0FBRWxDLE1BQU0scUJBQXFCLEdBQUcsR0FBRyxDQUFDO0FBQ2xDLE1BQU0sdUJBQXVC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