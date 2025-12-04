#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyCraftDataID_t.hpp"
#include "source2sdk/client/FantasyCraftOperationBucket_t.hpp"
#include "source2sdk/client/FantasyCraftingGemData_t.hpp"
#include "source2sdk/client/FantasyCraftingQualityData_t.hpp"
#include "source2sdk/client/FantasyCraftingShapeData_t.hpp"
#include "source2sdk/client/FantasyCraftingTabletData_t.hpp"
#include "source2sdk/client/FantasyCraftingTitleData_t.hpp"

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
        struct FantasyCraftSetupData_t
        {
        public:
            // metadata: MPropertyDescription "Unique identifier for this set of crafting data"
            source2sdk::client::FantasyCraftDataID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecPrefixes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingTitleData_t> m_vecPrefixes;
            char m_vecPrefixes[0x_]; // 0x_            
            // m_vecSuffixes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingTitleData_t> m_vecSuffixes;
            char m_vecSuffixes[0x_]; // 0x_            
            // m_vecGems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingGemData_t> m_vecGems;
            char m_vecGems[0x_]; // 0x_            
            // m_vecShapes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingShapeData_t> m_vecShapes;
            char m_vecShapes[0x_]; // 0x_            
            // m_vecQualities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingQualityData_t> m_vecQualities;
            char m_vecQualities[0x_]; // 0x_            
            // m_vecTablets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingTabletData_t> m_vecTablets;
            char m_vecTablets[0x_]; // 0x_            
            // m_vecOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftOperationBucket_t> m_vecOperations;
            char m_vecOperations[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_vecPrefixes) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_vecSuffixes) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_vecGems) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_vecShapes) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_vecQualities) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_vecTablets) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftSetupData_t, m_vecOperations) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftSetupData_t) == 0x_);
    };
};
