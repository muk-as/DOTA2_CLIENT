#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"

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
        // Size: 0x890
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItem : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad07b8[0x8]; // 0x7b8
            source2sdk::entity2::CEntityIOOutput m_OnPlayerTouch; // 0x7c0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x7e8            
            bool m_bActivateWhenAtRest; // 0x810            
            uint8_t _pad0811[0x7]; // 0x811
            source2sdk::entity2::CEntityIOOutput m_OnCacheInteraction; // 0x818            
            source2sdk::entity2::CEntityIOOutput m_OnGlovePulled; // 0x840            
            Vector m_vOriginalSpawnOrigin; // 0x868            
            QAngle m_vOriginalSpawnAngles; // 0x874            
            bool m_bPhysStartAsleep; // 0x880            
            uint8_t _pad0881[0xf];
            
            // Datamap fields:
            // void CItemItemTouch; // 0x0
            // void CItemMaterialize; // 0x0
            // void CItemComeToRest; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem) == 0x890);
    };
};
