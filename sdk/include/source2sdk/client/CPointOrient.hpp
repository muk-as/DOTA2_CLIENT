#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/PointOrientConstraint_t.hpp"
#include "source2sdk/client/PointOrientGoalDirectionType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x530
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CPointOrient : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlSymbolLarge m_iszSpawnTargetName; // 0x510            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x518            
            bool m_bActive; // 0x51c            
            uint8_t _pad051d[0x3]; // 0x51d
            source2sdk::client::PointOrientGoalDirectionType_t m_nGoalDirection; // 0x520            
            source2sdk::client::PointOrientConstraint_t m_nConstraint; // 0x524            
            float m_flMaxTurnRate; // 0x528            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x52c            
            
            // Datamap fields:
            // bool InputSetActive; // 0x0
            // CUtlSymbolLarge InputSetTarget; // 0x0
            // void CPointOrientReorientThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointOrient because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointOrient) == 0x530);
    };
};
