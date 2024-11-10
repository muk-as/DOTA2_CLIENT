#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
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
    // Size: 0x78
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTargetWarpUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x4]; // 0x68
        animgraphlib::CAnimParamHandle m_hTargetPositionParameter; // 0x6c        
        animgraphlib::CAnimParamHandle m_hTargetUpVectorParameter; // 0x6e        
        animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x70        
        bool m_bTargetFacePositionIsWorldSpace; // 0x72        
        bool m_bTargetPositionIsWorldSpace; // 0x73        
        [[maybe_unused]] std::uint8_t pad_0x74[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTargetWarpUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CTargetWarpUpdateNode) == 0x78);
};
