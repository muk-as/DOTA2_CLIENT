#pragma once
#include "source2sdk/modellib/VPhysics2ShapeDef_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VPhysXBodyPart_t
    {
    public:
        uint32_t m_nFlags; // 0x0        
        float m_flMass; // 0x4        
        modellib::VPhysics2ShapeDef_t m_rnShape; // 0x8        
        uint16_t m_nCollisionAttributeIndex; // 0x80        
        uint16_t m_nReserved; // 0x82        
        float m_flInertiaScale; // 0x84        
        float m_flLinearDamping; // 0x88        
        float m_flAngularDamping; // 0x8c        
        bool m_bOverrideMassCenter; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x91[0x3]; // 0x91
        Vector m_vMassCenterOverride; // 0x94        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VPhysXBodyPart_t, m_nFlags) == 0x0);
    static_assert(offsetof(VPhysXBodyPart_t, m_flMass) == 0x4);
    static_assert(offsetof(VPhysXBodyPart_t, m_rnShape) == 0x8);
    static_assert(offsetof(VPhysXBodyPart_t, m_nCollisionAttributeIndex) == 0x80);
    static_assert(offsetof(VPhysXBodyPart_t, m_nReserved) == 0x82);
    static_assert(offsetof(VPhysXBodyPart_t, m_flInertiaScale) == 0x84);
    static_assert(offsetof(VPhysXBodyPart_t, m_flLinearDamping) == 0x88);
    static_assert(offsetof(VPhysXBodyPart_t, m_flAngularDamping) == 0x8c);
    static_assert(offsetof(VPhysXBodyPart_t, m_bOverrideMassCenter) == 0x90);
    static_assert(offsetof(VPhysXBodyPart_t, m_vMassCenterOverride) == 0x94);
    
    static_assert(sizeof(VPhysXBodyPart_t) == 0xa0);
};
