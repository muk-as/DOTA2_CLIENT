#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/PointOrientConstraint_t.hpp"
#include "source2sdk/client/PointOrientGoalDirectionType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x580
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CPointOrient : public client::C_BaseEntity
    {
    public:
        CUtlSymbolLarge m_iszSpawnTargetName; // 0x560        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x568        
        bool m_bActive; // 0x56c        
        [[maybe_unused]] std::uint8_t pad_0x56d[0x3]; // 0x56d
        client::PointOrientGoalDirectionType_t m_nGoalDirection; // 0x570        
        client::PointOrientConstraint_t m_nConstraint; // 0x574        
        float m_flMaxTurnRate; // 0x578        
        entity2::GameTime_t m_flLastGameTime; // 0x57c        
        
        // Datamap fields:
        // bool InputSetActive; // 0x0
        // CUtlSymbolLarge InputSetTarget; // 0x0
        // void CPointOrientReorientThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointOrient because it is not a standard-layout class
    static_assert(sizeof(CPointOrient) == 0x580);
};
