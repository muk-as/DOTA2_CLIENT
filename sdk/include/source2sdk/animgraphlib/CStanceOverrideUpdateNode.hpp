#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/StanceInfo_t.hpp"
#include "source2sdk/animgraphlib/StanceOverrideMode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStanceOverrideUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            // m_footStanceInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::StanceInfo_t> m_footStanceInfo;
            char m_footStanceInfo[0x18]; // 0x70            
            source2sdk::animgraphlib::CAnimUpdateNodeRef m_pStanceSourceNode; // 0x88            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameter; // 0x98            
            uint8_t _pad009a[0x2]; // 0x9a
            source2sdk::animgraphlib::StanceOverrideMode m_eMode; // 0x9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CStanceOverrideUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CStanceOverrideUpdateNode) == 0xa0);
    };
};
