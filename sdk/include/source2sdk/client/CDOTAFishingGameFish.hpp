#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFishingGameFishCategory.hpp"

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
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFishingGameFish
        {
        public:
            CUtlString m_strLocName; // 0x_            
            CUtlString m_strID; // 0x_            
            source2sdk::client::EFishingGameFishCategory m_eCategory; // 0x_            
            float m_flAverageWeight; // 0x_            
            float m_flBaseModelScale; // 0x_            
            float m_flBonusDifficulty; // 0x_            
            std::int32_t m_nSceneModelBodyIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strFlatSceneModel; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_strLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_strID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_eCategory) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_flAverageWeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_flBaseModelScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_flBonusDifficulty) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_nSceneModelBodyIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_strFlatSceneModel) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFishingGameFish) == 0x_);
    };
};
