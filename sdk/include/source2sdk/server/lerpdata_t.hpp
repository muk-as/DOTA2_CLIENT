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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct lerpdata_t
        {
        public:
            // m_hEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnt;
            char m_hEnt[0x_]; // 0x_            
            source2sdk::client::MoveType_t m_MoveType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            Vector m_vecStartOrigin; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Quaternion m_qStartRot; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_nSound; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_hEnt) == 0x_);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_MoveType) == 0x_);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_flStartTime) == 0x_);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_vecStartOrigin) == 0x_);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_qStartRot) == 0x_);
        static_assert(offsetof(source2sdk::server::lerpdata_t, m_nFXIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::server::lerpdata_t) == 0x_);
    };
};
