#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoneWeightList.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct NmBoneMaskSetDefinition_t
        {
        public:
            CGlobalSymbol m_ID; // 0x_            
            source2sdk::animlib::CNmBoneWeightList m_primaryWeightList; // 0x_            
            // m_secondaryWeightLists has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::animlib::CNmBoneWeightList> m_secondaryWeightLists;
            char m_secondaryWeightLists[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::NmBoneMaskSetDefinition_t, m_ID) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmBoneMaskSetDefinition_t, m_primaryWeightList) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmBoneMaskSetDefinition_t, m_secondaryWeightLists) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::NmBoneMaskSetDefinition_t) == 0x_);
    };
};
