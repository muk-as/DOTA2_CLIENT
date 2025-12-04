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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItem : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnPlayerTouch; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x_            
            bool m_bActivateWhenAtRest; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnCacheInteraction; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnGlovePulled; // 0x_            
            Vector m_vOriginalSpawnOrigin; // 0x_            
            QAngle m_vOriginalSpawnAngles; // 0x_            
            bool m_bPhysStartAsleep; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CItemItemTouch; // 0x_
            // void CItemMaterialize; // 0x_
            // void CItemComeToRest; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem) == 0x_);
    };
};
