#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a48
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTA_PortraitEntity : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::client::CountdownTimer m_PetIdleTimer; // 0x1a00            
            source2sdk::client::ParticleIndex_t m_nMouthFX; // 0x1a18            
            std::int32_t m_nMouthControlPoint; // 0x1a1c            
            source2sdk::client::ParticleIndex_t m_iPortraitParticle; // 0x1a20            
            std::int32_t m_PortraitActivity; // 0x1a24            
            // m_CustomActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_CustomActivityModifiers;
            char m_CustomActivityModifiers[0x18]; // 0x1a28            
            bool m_bIsSimulationActive; // 0x1a40            
            uint8_t _pad1a41[0x3]; // 0x1a41
            CEntityHandle m_hAppearanceFromNPC; // 0x1a44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_PortraitEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_PortraitEntity) == 0x1a48);
    };
};
