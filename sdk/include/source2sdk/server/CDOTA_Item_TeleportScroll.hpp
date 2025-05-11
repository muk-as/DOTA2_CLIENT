#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_TeleportScroll : public source2sdk::server::CDOTA_Item
        {
        public:
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0x688            
            source2sdk::client::ParticleIndex_t m_nFXOrigin; // 0x68c            
            source2sdk::client::ParticleIndex_t m_nFXDestination; // 0x690            
            Vector m_vDestination; // 0x694            
            std::int32_t m_iMinDistance; // 0x6a0            
            float m_flBaseTeleportTime; // 0x6a4            
            float m_flExtraTeleportTime; // 0x6a8            
            uint8_t _pad06ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_TeleportScroll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_TeleportScroll) == 0x6b0);
    };
};
