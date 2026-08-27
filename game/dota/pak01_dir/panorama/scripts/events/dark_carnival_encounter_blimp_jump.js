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
let gameClock = 0;
let lastRealFrameTime = null;
function AdvanceClock() {
    const now = $.FrameTime();
    const delta = lastRealFrameTime == null ? 0 : Math.min(Math.max(now - lastRealFrameTime, 0), 0.1);
    lastRealFrameTime = now;
    if (blimpJumpState == BlimpJumpState_t.Paused)
        return 0;
    gameClock += delta;
    return delta;
}
function GetGameTime() {
    return gameClock;
}
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
        this.rocketStartedTimestamp = GetGameTime();
    }
    IsRocketing() {
        return this.rocketStartedTimestamp != null
            && GetGameTime() - this.rocketStartedTimestamp < ROCKET_DURATION
            && this.startDyingTimestamp == null
            && this.startWinningTimestamp == null;
    }
    update(dt) {
        if (this.startWinningTimestamp != null) {
            this.acceleration = { x: 0, y: 0 };
            this.velocity = { x: 0, y: 0 };
            if (GetGameTime() - this.startWinningTimestamp > 1.5) {
                PlayUISoundEvent("dark_carnival.blimp_jump.music.victory");
                EndGame(true);
            }
            return;
        }
        else if (this.startDyingTimestamp != null) {
            const timestamp = this.startDyingTimestamp;
            const delta = GetGameTime() - timestamp;
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
                    this.startDyingTimestamp = GetGameTime();
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
                if (GetGameTime() - this.lastWhooshLine > 0.03 && this.fallExplosion == null) {
                    CreateWhooshLine({ x: RandomInt(0, viewportWidth), y: gameState.scrollOffset - 100 });
                    this.lastWhooshLine = GetGameTime();
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
                player.startWinningTimestamp = GetGameTime();
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
                player.startDyingTimestamp = GetGameTime();
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
                player.startDyingTimestamp = GetGameTime();
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
            this.deadTimestamp = GetGameTime();
            this.element.style.opacity = "0";
        }
        if (this.deadTimestamp != null && (this.deadTimestamp + 0.3) < GetGameTime()) {
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
        startGameTimestamp: GetGameTime(),
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
    dt = AdvanceClock();
    if (DEBUG_LEVEL) {
        gameState.gameObjects.forEach((gameObject) => gameObject.update(dt));
        return;
    }
    switch (blimpJumpState) {
        case BlimpJumpState_t.MainMenu:
            {
                let slarkPanel = $("#MainMenuSlark");
                if (slarkPanel) {
                    const y = -10 + -bounceY(GetGameTime(), 700, 1200);
                    slarkPanel.style.y = y + "px";
                    slarkPanel.ApplyStyles(false);
                    slarkPanel.SwitchClass("Stance", isBounceGoingDown(GetGameTime(), 700, 1200) ? "Falling" : "Jumping");
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
        if (gameState.startGameTimestamp + LAUNCH_DELAY < GetGameTime()) {
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
                attachment.playerHitboxScaleX = 0.5;
                attachment.playerHitboxScaleY = 0.67;
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
                    player.startDyingTimestamp = GetGameTime();
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
function ForcePause() {
    if (blimpJumpState == BlimpJumpState_t.Playing) {
        Pause();
    }
}
$.RegisterForUnhandledEvent("DOTAEncounterFrame", EventUpdate);
$.RegisterForUnhandledEvent("DOTADarkCarnivalBlimpJumpForcePause", ForcePause);
// $.GetContextPanel().SwitchClass("BlimpJumpState", "BlimpJumpState_" + BlimpJumpState_t[blimpJumpState]);
// $.GetContextPanel().SwitchClass("BlimpJumpState", "BlimpJumpState_MainMenu");
// StartBlimpJump( false );
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoiZGFya19jYXJuaXZhbF9lbmNvdW50ZXJfYmxpbXBfanVtcC5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbIi4uLy4uLy4uLy4uLy4uL2NvbnRlbnQvZG90YS9wYW5vcmFtYS9zY3JpcHRzL2V2ZW50cy9kYXJrX2Nhcm5pdmFsX2VuY291bnRlcl9ibGltcF9qdW1wLnRzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiI7QUFBQSxxQ0FBcUM7QUFDckMsbUNBQW1DO0FBQ25DLDJDQUEyQztBQUMzQywrQ0FBK0M7QUFDL0Msb0RBQW9EO0FBRXBELE1BQU0sUUFBUSxHQUFHLEVBQUUsQ0FBQztBQUNwQixNQUFNLFNBQVMsR0FBRyxFQUFFLENBQUM7QUFDckIsTUFBTSxNQUFNLEdBQUcsRUFBRSxDQUFDO0FBQ2xCLE1BQU0sS0FBSyxHQUFHLEVBQUUsQ0FBQztBQUNqQixNQUFNLEtBQUssR0FBRyxFQUFFLENBQUM7QUFDakIsTUFBTSxLQUFLLEdBQUcsRUFBRSxDQUFDO0FBQ2pCLE1BQU0sU0FBUyxHQUFHLEVBQUUsQ0FBQztBQUNyQixNQUFNLFVBQVUsR0FBRyxFQUFFLENBQUM7QUFFdEIsTUFBTSxjQUFjLEdBQUcsQ0FBQyxJQUFJLENBQUM7QUFDN0IsTUFBTSxrQkFBa0IsR0FBRyxDQUFDLElBQUksQ0FBQztBQUVqQyxNQUFNLFVBQVUsR0FBRyxHQUFHLENBQUM7QUFDdkIsTUFBTSxZQUFZLEdBQUcsSUFBSSxDQUFDO0FBQzFCLE1BQU0sZ0JBQWdCLEdBQUcsSUFBSSxDQUFDO0FBRTlCLE1BQU0sZ0JBQWdCLEdBQUcsR0FBRyxDQUFDO0FBQzdCLE1BQU0seUJBQXlCLEdBQUcsSUFBSSxDQUFDO0FBRXZDLE1BQU0sd0JBQXdCLEdBQUcsSUFBSSxDQUFDO0FBQ3RDLE1BQU0sd0JBQXdCLEdBQUcsR0FBRyxDQUFDO0FBRXJDLE1BQU0sb0JBQW9CLEdBQUcsSUFBSSxDQUFDO0FBRWxDLE1BQU0scUJBQXFCLEdBQUcsR0FBRyxDQUFDO0FBQ2xDLE1BQU0sdUJBQXVC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