#pragma once
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/JiggleBoneSettingsList_t.hpp"
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
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CJiggleBoneUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::JiggleBoneSettingsList_t m_opFixedData; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x80[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CJiggleBoneUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CJiggleBoneUpdateNode) == 0x88);
};
