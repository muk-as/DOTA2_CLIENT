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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x800
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvExplosion : public source2sdk::server::CModelPointEntity
        {
        public:
            std::int32_t m_iMagnitude; // 0x7a8            
            float m_flPlayerDamage; // 0x7ac            
            std::int32_t m_iRadiusOverride; // 0x7b0            
            float m_flInnerRadius; // 0x7b4            
            float m_flDamageForce; // 0x7b8            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInflictor;
            char m_hInflictor[0x4]; // 0x7bc            
            source2sdk::client::DamageTypes_t m_iCustomDamageType; // 0x7c0            
            bool m_bCreateDebris; // 0x7c4            
            uint8_t _pad07c5[0xb]; // 0x7c5
            CUtlSymbolLarge m_iszCustomEffectName; // 0x7d0            
            CUtlSymbolLarge m_iszCustomSoundName; // 0x7d8            
            bool m_bSuppressParticleImpulse; // 0x7e0            
            uint8_t _pad07e1[0x3]; // 0x7e1
            source2sdk::client::Class_T m_iClassIgnore; // 0x7e4            
            source2sdk::client::Class_T m_iClassIgnore2; // 0x7e8            
            uint8_t _pad07ec[0x4]; // 0x7ec
            CUtlSymbolLarge m_iszEntityIgnoreName; // 0x7f0            
            // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityIgnore;
            char m_hEntityIgnore[0x4]; // 0x7f8            
            uint8_t _pad07fc[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge explosion_type; // 0x7fffffff
            // uint32_t m_nExplosionType; // 0x7c8
            // void InputExplode; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvExplosion) == 0x800);
    };
};
