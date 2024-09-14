#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 40
    // Alignment: 8
    // Size: 0x8
    enum class DebugOverlayBits_t : std::uint64_t
    {
        // MPropertyFriendlyName "Ent Text"
        // MPropertyDescription "show text debug overlay for this entity"
        OVERLAY_TEXT_BIT = 0x1,
        // MPropertyFriendlyName "Name"
        // MPropertyDescription "show name debug overlay for this entity"
        OVERLAY_NAME_BIT = 0x2,
        // MPropertyFriendlyName "Bounding Box"
        // MPropertyDescription "show bounding box overlay for this entity"
        OVERLAY_BBOX_BIT = 0x4,
        // MPropertyFriendlyName "Pivot"
        // MPropertyDescription "show pivot for this entity"
        OVERLAY_PIVOT_BIT = 0x8,
        // MPropertyFriendlyName "Message"
        // MPropertyDescription "TODO show messages for this entity"
        OVERLAY_MESSAGE_BIT = 0x10,
        // MPropertyFriendlyName "ABS BBox"
        // MPropertyDescription "show abs bounding box overlay"
        OVERLAY_ABSBOX_BIT = 0x20,
        // MPropertyFriendlyName "RBox"
        // MPropertyDescription "show the rbox overlay"
        OVERLAY_RBOX_BIT = 0x40,
        // MPropertyFriendlyName "Entities That Block LOS"
        // MPropertyDescription "TODO show entities that block NPC LOS"
        OVERLAY_SHOW_BLOCKSLOS = 0x80,
        // MPropertyFriendlyName "Attachment Points"
        // MPropertyDescription "show attachment points"
        OVERLAY_ATTACHMENTS_BIT = 0x100,
        // MPropertyFriendlyName "Interpolated Attachment Points"
        // MPropertyDescription "show interpolated attachment points"
        OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
        // MPropertyFriendlyName "Interpolated Pivot"
        // MPropertyDescription "show interpolated pivot for this entity"
        OVERLAY_INTERPOLATED_PIVOT_BIT = 0x400,
        // MPropertyFriendlyName "Skeleton"
        // MPropertyDescription "show skeleton for this entity"
        OVERLAY_SKELETON_BIT = 0x800,
        // MPropertyFriendlyName "Interpolated Skeleton"
        // MPropertyDescription "show interpolated skeleton"
        OVERLAY_INTERPOLATED_SKELETON_BIT = 0x1000,
        // MPropertyFriendlyName "Trigger Bounds"
        // MPropertyDescription "show trigger bounds"
        OVERLAY_TRIGGER_BOUNDS_BIT = 0x2000,
        // MPropertyFriendlyName "Hitboxes"
        // MPropertyDescription "show hitboxes for this entity"
        OVERLAY_HITBOX_BIT = 0x4000,
        // MPropertyFriendlyName "Interpolated Hitboxes"
        // MPropertyDescription "show interpolated hitboxes"
        OVERLAY_INTERPOLATED_HITBOX_BIT = 0x8000,
        // MPropertyFriendlyName "Autoaim Radius"
        // MPropertyDescription "TODO Display autoaim radius"
        OVERLAY_AUTOAIM_BIT = 0x10000,
        // MPropertyFriendlyName "NPC Selected"
        // MPropertyDescription "TODO the npc is current selected SOURCE2_UNSUPPORTED?"
        OVERLAY_NPC_SELECTED_BIT = 0x20000,
        // MPropertyFriendlyName "Joint Info"
        // MPropertyDescription "hows joint info for this entity"
        OVERLAY_JOINT_INFO_BIT = 0x40000,
        // MPropertyFriendlyName "NPC Route"
        // MPropertyDescription "draw the route for this npc"
        OVERLAY_NPC_ROUTE_BIT = 0x80000,
        OVERLAY_VISIBILITY_TRACES_BIT = 0x100000,
        // MPropertyFriendlyName "NPC Enemies"
        // MPropertyDescription "show npc's enemies"
        OVERLAY_NPC_ENEMIES_BIT = 0x400000,
        // MPropertyFriendlyName "NPC Conditions"
        // MPropertyDescription "show NPC's current conditions"
        OVERLAY_NPC_CONDITIONS_BIT = 0x800000,
        // MPropertyFriendlyName "NPC Combat"
        // MPropertyDescription "show npc combat related information (squads/slots/etc)"
        OVERLAY_NPC_COMBAT_BIT = 0x1000000,
        // MPropertyFriendlyName "NPC Schedule Tasks"
        // MPropertyDescription "show npc schedule task details"
        OVERLAY_NPC_TASK_BIT = 0x2000000,
        // MPropertyFriendlyName "NPC Body Locations"
        // MPropertyDescription "show npc body locations"
        OVERLAY_NPC_BODYLOCATIONS = 0x4000000,
        // MPropertyFriendlyName "NPC View Conde"
        // MPropertyDescription "show npc's viewcone"
        OVERLAY_NPC_VIEWCONE_BIT = 0x8000000,
        // MPropertyFriendlyName "NPC Kill"
        // MPropertyDescription "kill the NPC, running all appropriate AI."
        OVERLAY_NPC_KILL_BIT = 0x10000000,
        // MPropertyFriendlyName "OVERLAY_WC_CHANGE_ENTITY"
        // MPropertyDescription "object changed during WC edit (probably unused)"
        OVERLAY_WC_CHANGE_ENTITY = 0x20000000,
        // MPropertyFriendlyName "Buddha Mode"
        // MPropertyDescription "TODO take damage but don't die"
        OVERLAY_BUDDHA_MODE = 0x40000000,
        // MPropertyFriendlyName "NPC Steering"
        // MPropertyDescription "Show the steering regulations associated with the NPC"
        OVERLAY_NPC_STEERING_REGULATIONS = 0x80000000,
        // MPropertyFriendlyName "NPC Task Console Text"
        // MPropertyDescription "show task and schedule names when they start"
        OVERLAY_NPC_TASK_TEXT_BIT = 0x100000000,
        // MPropertyFriendlyName "Prop Debug"
        // MPropertyDescription "Show prop health and bounds"
        OVERLAY_PROP_DEBUG = 0x200000000,
        // MPropertyFriendlyName "NPC Relationships"
        // MPropertyDescription "show relationships between target and all children"
        OVERLAY_NPC_RELATION_BIT = 0x400000000,
        // MPropertyFriendlyName "View Offset"
        // MPropertyDescription "TODO show view offset"
        OVERLAY_VIEWOFFSET = 0x800000000,
        // MPropertyFriendlyName "Collision Wireframe"
        // MPropertyDescription "show collision wireframe"
        OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0x1000000000,
        // MPropertyFriendlyName "NPC Scripted Commands"
        // MPropertyDescription "show the state of scripted commands"
        OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = 0x2000000000,
        // MPropertyFriendlyName "Actor Name"
        // MPropertyDescription "show fancy actor name over head of actors (entities which return ShouldDisplayInActorNames() == true)"
        OVERLAY_ACTORNAME_BIT = 0x4000000000,
        // MPropertyFriendlyName "NPC Gather Conditions"
        // MPropertyDescription "show condition gathering text info"
        OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
        // MPropertyFriendlyName "NPC Ability Ranges"
        // MPropertyDescription "draw range indicators for all abilities on the NPC"
        OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 0x10000000000,
    };
};
