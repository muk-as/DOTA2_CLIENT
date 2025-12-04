#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvExplosion : public source2sdk::server::CModelPointEntity
        {
        public:
            std::int32_t m_iMagnitude; // 0x_            
            float m_flPlayerDamage; // 0x_            
            std::int32_t m_iRadiusOverride; // 0x_            
            float m_flInnerRadius; // 0x_            
            float m_flDamageForce; // 0x_            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInflictor;
            char m_hInflictor[0x_]; // 0x_            
            source2sdk::client::DamageTypes_t m_iCustomDamageType; // 0x_            
            bool m_bCreateDebris; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszCustomEffectName; // 0x_            
            CUtlSymbolLarge m_iszCustomSoundName; // 0x_            
            bool m_bSuppressParticleImpulse; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::Class_T m_iClassIgnore; // 0x_            
            source2sdk::client::Class_T m_iClassIgnore2; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszEntityIgnoreName; // 0x_            
            // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityIgnore;
            char m_hEntityIgnore[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge explosion_type; // 0x_
            // uint32_t m_nExplosionType; // 0x_
            // void InputExplode; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvExplosion) == 0x_);
    };
};
