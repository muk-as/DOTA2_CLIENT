#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct lerpdata_t
        {
        public:
            // m_hEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnt;
            char m_hEnt[0x4]; // 0x0            
            source2sdk::client::MoveType_t m_MoveType; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x8            
            Vector m_vecStartOrigin; // 0xc            
            uint8_t _pad0018[0x8]; // 0x18
            Quaternion m_qStartRot; // 0x20            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x30            
            uint8_t _pad0034[0xc];
            
            // Datamap fields:
            // void m_nSound; // 0x34
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_hEnt) == 0x0);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_MoveType) == 0x4);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_flStartTime) == 0x8);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_vecStartOrigin) == 0xc);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_qStartRot) == 0x20);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_nFXIndex) == 0x30);
        
        static_assert(sizeof(source2sdk::server::lerpdata_t) == 0x40);
    };
};
