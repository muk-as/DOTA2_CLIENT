#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x698
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Item_TeleportScroll : public server::CDOTA_Item
    {
    public:
        // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTeleportTarget;
        char m_hTeleportTarget[0x4]; // 0x670        
        client::ParticleIndex_t m_nFXOrigin; // 0x674        
        client::ParticleIndex_t m_nFXDestination; // 0x678        
        Vector m_vDestination; // 0x67c        
        int32_t m_iMinDistance; // 0x688        
        float m_flBaseTeleportTime; // 0x68c        
        float m_flExtraTeleportTime; // 0x690        
        [[maybe_unused]] std::uint8_t pad_0x694[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_TeleportScroll because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_TeleportScroll) == 0x698);
};
