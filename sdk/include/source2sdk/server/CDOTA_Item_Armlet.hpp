#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"

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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Armlet : public source2sdk::server::CDOTA_Item
        {
        public:
            float toggle_cooldown; // 0x690            
            source2sdk::entity2::GameTime_t m_flLastActivateTime; // 0x694            
            source2sdk::entity2::GameTime_t m_flLastDeactivateTime; // 0x698            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Armlet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Armlet) == 0x6a0);
    };
};
