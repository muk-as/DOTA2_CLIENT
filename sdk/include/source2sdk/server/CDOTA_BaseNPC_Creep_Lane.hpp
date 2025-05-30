#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18e8
        // Has VTable
        // Construct allowed
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
        // static metadata: MNetworkVarNames "FowCustomTeams_t m_nFoWTeam"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Creep_Lane : public source2sdk::server::CDOTA_BaseNPC_Creep
        {
        public:
            uint8_t _pad18c8[0x1c]; // 0x18c8
            // metadata: MNetworkEnable
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x18e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creep_Lane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creep_Lane) == 0x18e8);
    };
};
