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
    class CDOTAFishingGameFish;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x88
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataSingleton
    #pragma pack(push, 1)
    class CDOTAFishingGameDefinition
    {
    public:
        CUtlString m_strID; // 0x0        
        bool m_bBurrowedFish; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7]; // 0x9
        CUtlString m_strMapName; // 0x10        
        CUtlString m_strBurrowedFishParticle; // 0x18        
        // m_vecFishTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAFishingGameFish*> m_vecFishTypes;
        char m_vecFishTypes[0x18]; // 0x20        
        // m_mapFishNameToVecIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlString,int32_t> m_mapFishNameToVecIndex;
        char m_mapFishNameToVecIndex[0x28]; // 0x38        
        // m_mapCategoryToDifficulty has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EFishingGameFishCategory,float> m_mapCategoryToDifficulty;
        char m_mapCategoryToDifficulty[0x28]; // 0x60        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAFishingGameDefinition, m_strID) == 0x0);
    static_assert(offsetof(CDOTAFishingGameDefinition, m_bBurrowedFish) == 0x8);
    static_assert(offsetof(CDOTAFishingGameDefinition, m_strMapName) == 0x10);
    static_assert(offsetof(CDOTAFishingGameDefinition, m_strBurrowedFishParticle) == 0x18);
    static_assert(offsetof(CDOTAFishingGameDefinition, m_vecFishTypes) == 0x20);
    static_assert(offsetof(CDOTAFishingGameDefinition, m_mapFishNameToVecIndex) == 0x38);
    static_assert(offsetof(CDOTAFishingGameDefinition, m_mapCategoryToDifficulty) == 0x60);
    
    static_assert(sizeof(CDOTAFishingGameDefinition) == 0x88);
};
