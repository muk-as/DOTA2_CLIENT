#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x260
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointPositionToTimeOfDayValue : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "time-of-day parameter"
        char m_pszTimeOfDayParameter[128]; // 0x1cc        
        // metadata: MPropertyFriendlyName "default value"
        Vector m_vecDefaultValue; // 0x24c        
        [[maybe_unused]] std::uint8_t pad_0x258[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointPositionToTimeOfDayValue because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointPositionToTimeOfDayValue) == 0x260);
};
