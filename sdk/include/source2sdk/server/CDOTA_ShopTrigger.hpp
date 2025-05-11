#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x998
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_ShopTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            std::int32_t m_ShopType; // 0x968            
            uint8_t _pad096c[0x4]; // 0x96c
            source2sdk::entity2::CEntityIOOutput m_OnTrigger; // 0x970            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ShopTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ShopTrigger) == 0x998);
    };
};
