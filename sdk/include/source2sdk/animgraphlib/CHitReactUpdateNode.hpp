#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/HitReactFixedSettings_t.hpp"
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
    class CHitReactUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::HitReactFixedSettings_t m_opFixedSettings; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0xac[0x8]; // 0xac
        animgraphlib::CAnimParamHandle m_triggerParam; // 0xb4        
        animgraphlib::CAnimParamHandle m_hitBoneParam; // 0xb6        
        animgraphlib::CAnimParamHandle m_hitOffsetParam; // 0xb8        
        animgraphlib::CAnimParamHandle m_hitDirectionParam; // 0xba        
        animgraphlib::CAnimParamHandle m_hitStrengthParam; // 0xbc        
        [[maybe_unused]] std::uint8_t pad_0xbe[0x2]; // 0xbe
        float m_flMinDelayBetweenHits; // 0xc0        
        bool m_bResetChild; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CHitReactUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CHitReactUpdateNode) == 0xc8);
};
