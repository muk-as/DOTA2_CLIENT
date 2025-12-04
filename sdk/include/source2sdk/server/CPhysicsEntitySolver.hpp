#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysicsEntitySolver : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_hMovingEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMovingEntity;
            char m_hMovingEntity[0x_]; // 0x_            
            // m_hPhysicsBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPhysicsBlocker;
            char m_hPhysicsBlocker[0x_]; // 0x_            
            float m_separationDuration; // 0x_            
            source2sdk::entity2::GameTime_t m_cancelTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsEntitySolver because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsEntitySolver) == 0x_);
    };
};
