#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FootPinningPoseOpFixedData_t.hpp"
#include "source2sdk/animgraphlib/FootPinningTimingSource.hpp"
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
    // Size: 0xc8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootPinningUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x8]; // 0x68
        animgraphlib::FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70        
        animgraphlib::FootPinningTimingSource m_eTimingSource; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa4[0x4]; // 0xa4
        // m_params has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CAnimParamHandle> m_params;
        char m_params[0x18]; // 0xa8        
        bool m_bResetChild; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootPinningUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFootPinningUpdateNode) == 0xc8);
};
