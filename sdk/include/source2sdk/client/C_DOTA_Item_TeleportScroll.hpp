#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x750
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_TeleportScroll : public source2sdk::client::C_DOTA_Item
        {
        public:
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0x728            
            source2sdk::client::ParticleIndex_t m_nFXOrigin; // 0x72c            
            source2sdk::client::ParticleIndex_t m_nFXDestination; // 0x730            
            Vector m_vDestination; // 0x734            
            std::int32_t m_iMinDistance; // 0x740            
            float m_flBaseTeleportTime; // 0x744            
            float m_flExtraTeleportTime; // 0x748            
            uint8_t _pad074c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_TeleportScroll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_TeleportScroll) == 0x750);
    };
};
