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
    class C_OP_SetControlPointToHand : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nCP1; // 0x1c8        
        // metadata: MPropertyFriendlyName "hand"
        int32_t m_nHand; // 0x1cc        
        // metadata: MPropertyFriendlyName "control point offset"
        // metadata: MVectorIsCoordinate
        Vector m_vecCP1Pos; // 0x1d0        
        // metadata: MPropertyFriendlyName "use hand orientation"
        bool m_bOrientToHand; // 0x1dc        
        [[maybe_unused]] std::uint8_t pad_0x1dd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointToHand because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointToHand) == 0x1e0);
};
