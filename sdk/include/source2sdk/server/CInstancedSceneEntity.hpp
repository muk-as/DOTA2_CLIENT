#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSceneEntity.hpp"
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
        // Size: 0xa50
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInstancedSceneEntity : public source2sdk::server::CSceneEntity
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0xa38            
            bool m_bHadOwner; // 0xa3c            
            uint8_t _pad0a3d[0x3]; // 0xa3d
            float m_flPostSpeakDelay; // 0xa40            
            float m_flPreDelay; // 0xa44            
            bool m_bIsBackground; // 0xa48            
            bool m_bRemoveOnCompletion; // 0xa49            
            uint8_t _pad0a4a[0x2]; // 0xa4a
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xa4c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInstancedSceneEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInstancedSceneEntity) == 0xa50);
    };
};
