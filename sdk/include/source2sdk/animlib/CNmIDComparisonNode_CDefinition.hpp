#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoolValueNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmIDComparisonNode_Comparison_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIDComparisonNode_CDefinition : public source2sdk::animlib::CNmBoolValueNode_CDefinition
        {
        public:
            std::int16_t m_nInputValueNodeIdx; // 0x10            
            source2sdk::animlib::CNmIDComparisonNode_Comparison_t m_comparison; // 0x12            
            uint8_t _pad0013[0x5]; // 0x13
            // m_comparisionIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,4> m_comparisionIDs;
            char m_comparisionIDs[0x28]; // 0x18            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmIDComparisonNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmIDComparisonNode_CDefinition) == 0x40);
    };
};
