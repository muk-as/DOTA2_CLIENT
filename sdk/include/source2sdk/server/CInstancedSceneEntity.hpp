#pragma once
#include "source2sdk/server/CSceneEntity.hpp"
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
    // Size: 0xa30
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInstancedSceneEntity : public server::CSceneEntity
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0xa18        
        bool m_bHadOwner; // 0xa1c        
        [[maybe_unused]] std::uint8_t pad_0xa1d[0x3]; // 0xa1d
        float m_flPostSpeakDelay; // 0xa20        
        float m_flPreDelay; // 0xa24        
        bool m_bIsBackground; // 0xa28        
        bool m_bRemoveOnCompletion; // 0xa29        
        [[maybe_unused]] std::uint8_t pad_0xa2a[0x2]; // 0xa2a
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xa2c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInstancedSceneEntity because it is not a standard-layout class
    static_assert(sizeof(CInstancedSceneEntity) == 0xa30);
};
