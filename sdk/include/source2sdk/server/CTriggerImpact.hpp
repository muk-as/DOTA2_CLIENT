#pragma once
#include "source2sdk/server/CTriggerMultiple.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9e0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CTriggerImpact : public server::CTriggerMultiple
    {
    public:
        float m_flMagnitude; // 0x9a8        
        float m_flNoise; // 0x9ac        
        float m_flViewkick; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b4[0x4]; // 0x9b4
        // m_pOutputForce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<Vector> m_pOutputForce;
        char m_pOutputForce[0x28]; // 0x9b8        
        
        // Datamap fields:
        // void InputImpact; // 0x0
        // float InputSetMagnitude; // 0x0
        // void CTriggerImpactDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerImpact because it is not a standard-layout class
    static_assert(sizeof(CTriggerImpact) == 0x9e0);
};
