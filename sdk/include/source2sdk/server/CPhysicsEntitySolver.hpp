#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysicsEntitySolver : public server::CLogicalEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x8]; // 0x4b8
        // m_hMovingEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMovingEntity;
        char m_hMovingEntity[0x4]; // 0x4c0        
        // m_hPhysicsBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPhysicsBlocker;
        char m_hPhysicsBlocker[0x4]; // 0x4c4        
        float m_separationDuration; // 0x4c8        
        entity2::GameTime_t m_cancelTime; // 0x4cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsEntitySolver because it is not a standard-layout class
    static_assert(sizeof(CPhysicsEntitySolver) == 0x4d0);
};
