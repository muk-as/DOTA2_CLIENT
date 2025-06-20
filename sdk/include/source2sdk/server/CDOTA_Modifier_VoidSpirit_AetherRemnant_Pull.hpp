#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1878            
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x187c            
            float m_fMovementSpeed; // 0x1880            
            // m_hPullTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hPullTarget;
            char m_hPullTarget[0x4]; // 0x1884            
            float think_interval; // 0x1888            
            float artifice_pct_effectiveness; // 0x188c            
            bool bIsArtifice; // 0x1890            
            uint8_t _pad1891[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull) == 0x1898);
    };
};
