#pragma once
#include "source2sdk/client/FantasyCraftDataID_t.hpp"
#include "source2sdk/client/FantasyCraftOperationBucket_t.hpp"
#include "source2sdk/client/FantasyCraftingGemData_t.hpp"
#include "source2sdk/client/FantasyCraftingQualityData_t.hpp"
#include "source2sdk/client/FantasyCraftingShapeData_t.hpp"
#include "source2sdk/client/FantasyCraftingTabletData_t.hpp"
#include "source2sdk/client/FantasyCraftingTitleData_t.hpp"
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
    // Size: 0xb8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyCraftSetupData_t
    {
    public:
        // metadata: MPropertyDescription "Unique identifier for this set of crafting data"
        client::FantasyCraftDataID_t m_unID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        // m_vecPrefixes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftingTitleData_t> m_vecPrefixes;
        char m_vecPrefixes[0x18]; // 0x8        
        // m_vecSuffixes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftingTitleData_t> m_vecSuffixes;
        char m_vecSuffixes[0x18]; // 0x20        
        // m_vecGems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftingGemData_t> m_vecGems;
        char m_vecGems[0x18]; // 0x38        
        // m_vecShapes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftingShapeData_t> m_vecShapes;
        char m_vecShapes[0x18]; // 0x50        
        // m_vecQualities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftingQualityData_t> m_vecQualities;
        char m_vecQualities[0x18]; // 0x68        
        // m_vecTablets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftingTabletData_t> m_vecTablets;
        char m_vecTablets[0x18]; // 0x80        
        // m_vecOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftOperationBucket_t> m_vecOperations;
        char m_vecOperations[0x18]; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0xb0[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyCraftSetupData_t, m_unID) == 0x0);
    static_assert(offsetof(FantasyCraftSetupData_t, m_vecPrefixes) == 0x8);
    static_assert(offsetof(FantasyCraftSetupData_t, m_vecSuffixes) == 0x20);
    static_assert(offsetof(FantasyCraftSetupData_t, m_vecGems) == 0x38);
    static_assert(offsetof(FantasyCraftSetupData_t, m_vecShapes) == 0x50);
    static_assert(offsetof(FantasyCraftSetupData_t, m_vecQualities) == 0x68);
    static_assert(offsetof(FantasyCraftSetupData_t, m_vecTablets) == 0x80);
    static_assert(offsetof(FantasyCraftSetupData_t, m_vecOperations) == 0x98);
    
    static_assert(sizeof(FantasyCraftSetupData_t) == 0xb8);
};
