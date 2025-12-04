#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyGameObjectID_t.hpp"
#include "source2sdk/client/ArtyGameObjectInstance_t.hpp"
#include "source2sdk/client/EArtyGameObjectType.hpp"
#include "source2sdk/client/EArtyHitboxType.hpp"
#include "source2sdk/client/EArtyLayer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        #pragma pack(push, 1)
        struct ArtyGameObjectDef_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ArtyGameObjectID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/events/crownfall/artillery_graphics.vdata"
            CUtlString m_szGraphicsDef; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_szDeathSound; // 0x_            
            source2sdk::client::EArtyHitboxType m_eHitboxType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vHitboxMin; // 0x_            
            Vector2D m_vHitboxMax; // 0x_            
            float m_flHitboxRadius; // 0x_            
            float m_flHitboxExtents; // 0x_            
            bool m_bInheritTransform; // 0x_            
            bool m_bInheritRotation; // 0x_            
            bool m_bInheritVisibility; // 0x_            
            bool m_bInheritState; // 0x_            
            bool m_bDestroyOnFallThrough; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFallDamagePerVelocity; // 0x_            
            bool m_bDeathCausesExplosion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flExplosionDamage; // 0x_            
            float m_flExplosionRadius; // 0x_            
            float m_flExplosionTerrainRadius; // 0x_            
            float m_flGravityMult; // 0x_            
            float m_flDragMult; // 0x_            
            float m_flWindMult; // 0x_            
            float m_flDeathMaxScaleFactor; // 0x_            
            bool m_bAllowPhysicsInDying; // 0x_            
            source2sdk::client::EArtyGameObjectType m_eType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::EArtyLayer m_eLayer; // 0x_            
            float m_flMaxHealth; // 0x_            
            float m_flHealth; // 0x_            
            bool m_bVisible; // 0x_            
            bool m_bCanCollide; // 0x_            
            bool m_bDoPhysics; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLifetime; // 0x_            
            float m_flDieTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecChildren has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ArtyGameObjectInstance_t> m_vecChildren;
            char m_vecChildren[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_szGraphicsDef) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_szDeathSound) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_eHitboxType) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_vHitboxMin) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_vHitboxMax) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flHitboxRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flHitboxExtents) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bInheritTransform) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bInheritRotation) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bInheritVisibility) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bInheritState) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bDestroyOnFallThrough) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flFallDamagePerVelocity) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bDeathCausesExplosion) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flExplosionDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flExplosionRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flExplosionTerrainRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flGravityMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flDragMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flWindMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flDeathMaxScaleFactor) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bAllowPhysicsInDying) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_eType) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_eLayer) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flMaxHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bVisible) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bCanCollide) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_bDoPhysics) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flLifetime) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_flDieTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectDef_t, m_vecChildren) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ArtyGameObjectDef_t) == 0x_);
    };
};
