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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Ward_Maker : public source2sdk::server::CDOTA_Item
        {
        public:
            float sentry_refresh; // 0x_            
            std::int32_t max_sentry_charges; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x_            
            float m_flTimeAccumulator; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Ward_Maker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Ward_Maker) == 0x_);
    };
};
