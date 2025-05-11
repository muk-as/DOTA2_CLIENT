#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x340
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderSound : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "duration scale"
            float m_flDurationScale; // 0x210            
            // metadata: MPropertyFriendlyName "decibel level scale"
            float m_flSndLvlScale; // 0x214            
            // metadata: MPropertyFriendlyName "pitch scale"
            float m_flPitchScale; // 0x218            
            // metadata: MPropertyFriendlyName "volume scale"
            float m_flVolumeScale; // 0x21c            
            // metadata: MPropertyFriendlyName "decibel level field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nSndLvlField; // 0x220            
            // metadata: MPropertyFriendlyName "duration field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nDurationField; // 0x224            
            // metadata: MPropertyFriendlyName "pitch field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nPitchField; // 0x228            
            // metadata: MPropertyFriendlyName "volume field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nVolumeField; // 0x22c            
            // metadata: MPropertyFriendlyName "sound channel"
            // metadata: MPropertyAttributeChoiceName "sound_channel"
            std::int32_t m_nChannel; // 0x230            
            // metadata: MPropertyFriendlyName "sound control point number"
            std::int32_t m_nCPReference; // 0x234            
            // metadata: MPropertyFriendlyName "sound"
            // metadata: MPropertyAttributeEditor "SoundPicker()"
            char m_pszSoundName[256]; // 0x238            
            // metadata: MPropertyFriendlyName "suppress stop event"
            bool m_bSuppressStopSoundEvent; // 0x338            
            uint8_t _pad0339[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderSound because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderSound) == 0x340);
    };
};
