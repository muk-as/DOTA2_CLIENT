#pragma once
#include "source2sdk/client/PointOrientConstraint_t.hpp"
#include "source2sdk/client/PointOrientGoalDirectionType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x500
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CPointOrient : public server::CBaseEntity
    {
    public:
        CUtlSymbolLarge m_iszSpawnTargetName; // 0x4e0        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x4e8        
        bool m_bActive; // 0x4ec        
        [[maybe_unused]] std::uint8_t pad_0x4ed[0x3]; // 0x4ed
        client::PointOrientGoalDirectionType_t m_nGoalDirection; // 0x4f0        
        client::PointOrientConstraint_t m_nConstraint; // 0x4f4        
        float m_flMaxTurnRate; // 0x4f8        
        entity2::GameTime_t m_flLastGameTime; // 0x4fc        
        
        // Datamap fields:
        // bool InputSetActive; // 0x0
        // CUtlSymbolLarge InputSetTarget; // 0x0
        // void CPointOrientReorientThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointOrient because it is not a standard-layout class
    static_assert(sizeof(CPointOrient) == 0x500);
};
