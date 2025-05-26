#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/NPCPhysicsHullType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MModelGameData
        // static metadata: MFgdHelper
        // static metadata: MFgdHelper
        #pragma pack(push, 1)
        class CNPCPhysicsHull
        {
        public:
            // metadata: MPropertyFriendlyName "Name"
            // metadata: MPropertySuppressField
            CGlobalSymbol m_sName; // 0x0            
            // metadata: MPropertyFriendlyName "Type"
            source2sdk::modellib::NPCPhysicsHullType_t m_eType; // 0x8            
            // metadata: MPropertySuppressExpr "m_eType != eGroundCapsule && m_eType != eCenteredCapsule"
            // metadata: MPropertyFriendlyName "Height"
            float m_flCapsuleHeight; // 0xc            
            // metadata: MPropertySuppressExpr "m_eType != eGroundCapsule && m_eType != eGenericCapsule && m_eType != eCenteredCapsule"
            // metadata: MPropertyFriendlyName "Radius"
            float m_flCapsuleRadius; // 0x10            
            // metadata: MPropertySuppressExpr "m_eType != eGenericCapsule"
            // metadata: MPropertyFriendlyName "Center 1"
            Vector m_vCapsuleCenter1; // 0x14            
            // metadata: MPropertySuppressExpr "m_eType != eGenericCapsule"
            // metadata: MPropertyFriendlyName "Center 2"
            Vector m_vCapsuleCenter2; // 0x20            
            // metadata: MPropertySuppressExpr "m_eType != eGroundBox"
            // metadata: MPropertyFriendlyName "Height"
            float m_flGroundBoxHeight; // 0x2c            
            // metadata: MPropertySuppressExpr "m_eType != eGroundBox"
            // metadata: MPropertyFriendlyName "Width"
            float m_flGroundBoxWidth; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_eType) == 0x8);
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_flCapsuleHeight) == 0xc);
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_flCapsuleRadius) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_vCapsuleCenter1) == 0x14);
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_vCapsuleCenter2) == 0x20);
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_flGroundBoxHeight) == 0x2c);
        static_assert(offsetof(source2sdk::modellib::CNPCPhysicsHull, m_flGroundBoxWidth) == 0x30);
        
        static_assert(sizeof(source2sdk::modellib::CNPCPhysicsHull) == 0x38);
    };
};
