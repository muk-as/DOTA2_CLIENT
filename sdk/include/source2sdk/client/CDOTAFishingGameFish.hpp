#pragma once
#include "source2sdk/client/EFishingGameFishCategory.hpp"
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
        client::EFishingGameFishCategory m_eCategory; // 0x10        
        float m_flAverageWeight; // 0x14        
        float m_flBaseModelScale; // 0x18        
        float m_flBonusDifficulty; // 0x1c        
        int32_t m_nSceneModelBodyIndex; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        CUtlString m_strFlatSceneModel; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x30[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAFishingGameFish, m_strLocName) == 0x0);
    static_assert(offsetof(CDOTAFishingGameFish, m_strID) == 0x8);
    static_assert(offsetof(CDOTAFishingGameFish, m_eCategory) == 0x10);
    static_assert(offsetof(CDOTAFishingGameFish, m_flAverageWeight) == 0x14);
    static_assert(offsetof(CDOTAFishingGameFish, m_flBaseModelScale) == 0x18);
    static_assert(offsetof(CDOTAFishingGameFish, m_flBonusDifficulty) == 0x1c);
    static_assert(offsetof(CDOTAFishingGameFish, m_nSceneModelBodyIndex) == 0x20);
    static_assert(offsetof(CDOTAFishingGameFish, m_strFlatSceneModel) == 0x28);
    
    static_assert(sizeof(CDOTAFishingGameFish) == 0x38);
};
