#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PointOrientConstraint_t.hpp"
#include "source2sdk/client/PointOrientGoalDirectionType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CPointOrient : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_iszSpawnTargetName; // 0x4d8            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x4e0            
            bool m_bActive; // 0x4e4            
            uint8_t _pad04e5[0x3]; // 0x4e5
            source2sdk::client::PointOrientGoalDirectionType_t m_nGoalDirection; // 0x4e8            
            source2sdk::client::PointOrientConstraint_t m_nConstraint; // 0x4ec            
            float m_flMaxTurnRate; // 0x4f0            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x4f4            
            
            // Datamap fields:
            // bool InputSetActive; // 0x0
            // CUtlSymbolLarge InputSetTarget; // 0x0
            // void CPointOrientReorientThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointOrient because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointOrient) == 0x4f8);
    };
};
