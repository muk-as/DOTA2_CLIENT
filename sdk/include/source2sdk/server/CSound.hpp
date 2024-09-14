#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AISound_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x34
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CSound
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x0        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x4        
        int32_t m_iVolume; // 0x8        
        float m_flOcclusionScale; // 0xc        
        server::AISound_t m_Sound; // 0x10        
        int32_t m_iNextAudible; // 0x14        
        entity2::GameTime_t m_flExpireTime; // 0x18        
        int16_t m_iNext; // 0x1c        
        bool m_bNoExpirationTime; // 0x1e        
        [[maybe_unused]] std::uint8_t pad_0x1f[0x1]; // 0x1f
        int32_t m_ownerChannelIndex; // 0x20        
        Vector m_vecOrigin; // 0x24        
        bool m_bHasOwner; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSound, m_hOwner) == 0x0);
    static_assert(offsetof(CSound, m_hTarget) == 0x4);
    static_assert(offsetof(CSound, m_iVolume) == 0x8);
    static_assert(offsetof(CSound, m_flOcclusionScale) == 0xc);
    static_assert(offsetof(CSound, m_Sound) == 0x10);
    static_assert(offsetof(CSound, m_iNextAudible) == 0x14);
    static_assert(offsetof(CSound, m_flExpireTime) == 0x18);
    static_assert(offsetof(CSound, m_iNext) == 0x1c);
    static_assert(offsetof(CSound, m_bNoExpirationTime) == 0x1e);
    static_assert(offsetof(CSound, m_ownerChannelIndex) == 0x20);
    static_assert(offsetof(CSound, m_vecOrigin) == 0x24);
    static_assert(offsetof(CSound, m_bHasOwner) == 0x30);
    
    static_assert(sizeof(CSound) == 0x34);
};
