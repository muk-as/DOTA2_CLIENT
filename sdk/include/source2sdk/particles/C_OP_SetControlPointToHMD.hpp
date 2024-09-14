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
    // Size: 0x1e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointToHMD : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nCP1; // 0x1c8        
        // metadata: MPropertyFriendlyName "control point offset"
        // metadata: MVectorIsCoordinate
        Vector m_vecCP1Pos; // 0x1cc        
        // metadata: MPropertyFriendlyName "use hmd orientation"
        bool m_bOrientToHMD; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1d9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointToHMD because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointToHMD) == 0x1e0);
};
