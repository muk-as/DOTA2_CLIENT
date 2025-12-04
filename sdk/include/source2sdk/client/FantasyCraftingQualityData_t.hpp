#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyGemQuality_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftingQualityData_t
        {
        public:
            // metadata: MPropertyDescription "Unique Identifier for the Quality"
            source2sdk::client::FantasyGemQuality_t m_unQualityID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Localization token for the name of the quality"
            CUtlString m_sLocName; // 0x_            
            // metadata: MPropertyDescription "How much does this quality improve the stat?"
            std::int32_t m_nBonus; // 0x_            
            // metadata: MPropertyDescription "How likely are we to roll this quality?"
            std::int32_t m_nRollWeight; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingQualityData_t, m_unQualityID) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingQualityData_t, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingQualityData_t, m_nBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingQualityData_t, m_nRollWeight) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingQualityData_t) == 0x_);
    };
};
