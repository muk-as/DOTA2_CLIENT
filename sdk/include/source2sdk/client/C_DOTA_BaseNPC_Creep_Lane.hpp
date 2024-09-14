#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Creep.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1810
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_CollisionGroup"
    // static metadata: MNetworkExcludeByName "m_Inventory"
    // static metadata: MNetworkExcludeByName "m_MoveCollide"
    // static metadata: MNetworkExcludeByName "m_MoveType"
    // static metadata: MNetworkExcludeByName "m_anglediff"
    // static metadata: MNetworkExcludeByName "m_bIsAncient"
    // static metadata: MNetworkExcludeByName "m_bIsNeutralUnitType"
    // static metadata: MNetworkExcludeByName "m_bIsPhantom"
    // static metadata: MNetworkExcludeByName "m_bIsSummoned"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_fadeMaxDist"
    // static metadata: MNetworkExcludeByName "m_fadeMinDist"
    // static metadata: MNetworkExcludeByName "m_flElasticity"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flFadeScale"
    // static metadata: MNetworkExcludeByName "m_flHealthThinkRegen"
    // static metadata: MNetworkExcludeByName "m_flManaThinkRegen"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_hActiveWeapon"
    // static metadata: MNetworkExcludeByName "m_hLightingOrigin"
    // static metadata: MNetworkExcludeByName "m_iCurShop"
    // static metadata: MNetworkExcludeByName "m_iDamageBonus"
    // static metadata: MNetworkExcludeByName "m_nForceBone"
    // static metadata: MNetworkExcludeByName "m_nRenderFX"
    // static metadata: MNetworkExcludeByName "m_nRenderMode"
    // static metadata: MNetworkExcludeByName "m_vecForce"
    // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Creep_Lane : public client::C_DOTA_BaseNPC_Creep
    {
    public:
        // metadata: MNetworkEnable
        client::FowCustomTeams_t m_nFoWTeam; // 0x1808        
        [[maybe_unused]] std::uint8_t pad_0x180c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Creep_Lane because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Creep_Lane) == 0x1810);
};
