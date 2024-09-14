#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/StanceInfo_t.hpp"
#include "source2sdk/animgraphlib/StanceOverrideMode.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x98
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStanceOverrideUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        // m_footStanceInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::StanceInfo_t> m_footStanceInfo;
        char m_footStanceInfo[0x18]; // 0x68        
        animgraphlib::CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80        
        animgraphlib::CAnimParamHandle m_hParameter; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x92[0x2]; // 0x92
        animgraphlib::StanceOverrideMode m_eMode; // 0x94        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CStanceOverrideUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CStanceOverrideUpdateNode) == 0x98);
};
