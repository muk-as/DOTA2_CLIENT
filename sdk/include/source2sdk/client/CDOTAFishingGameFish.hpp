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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFishingGameFish
        {
        public:
            CUtlString m_strLocName; // 0x0            
            CUtlString m_strID; // 0x8            
            source2sdk::client::EFishingGameFishCategory m_eCategory; // 0x10            
            float m_flAverageWeight; // 0x14            
            float m_flBaseModelScale; // 0x18            
            float m_flBonusDifficulty; // 0x1c            
            std::int32_t m_nSceneModelBodyIndex; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            CUtlString m_strFlatSceneModel; // 0x28            
            uint8_t _pad0030[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_strLocName) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_strID) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_eCategory) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_flAverageWeight) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_flBaseModelScale) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_flBonusDifficulty) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_nSceneModelBodyIndex) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameFish, m_strFlatSceneModel) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CDOTAFishingGameFish) == 0x38);
    };
};
