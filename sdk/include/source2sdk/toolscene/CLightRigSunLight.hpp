#pragma once
#include "source2sdk/toolscene/CLightRigLight.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::toolscene
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x54
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CLightRigSunLight : public toolscene::CLightRigLight
    {
    public:
        float m_flShadowCascadeDistance0; // 0x40        
        float m_flShadowCascadeDistance1; // 0x44        
        float m_flShadowCascadeDistance2; // 0x48        
        float m_flShadowCascadeDistance3; // 0x4c        
        bool m_bCastShadows; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLightRigSunLight because it is not a standard-layout class
    static_assert(sizeof(CLightRigSunLight) == 0x54);
};
