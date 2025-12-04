#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        class CLogicMeasureMovement : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_strMeasureTarget; // 0x_            
            CUtlSymbolLarge m_strMeasureReference; // 0x_            
            CUtlSymbolLarge m_strTargetReference; // 0x_            
            // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMeasureTarget;
            char m_hMeasureTarget[0x_]; // 0x_            
            // m_hMeasureReference has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMeasureReference;
            char m_hMeasureReference[0x_]; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            // m_hTargetReference has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetReference;
            char m_hTargetReference[0x_]; // 0x_            
            float m_flScale; // 0x_            
            std::int32_t m_nMeasureType; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetMeasureTarget; // 0x_
            // CUtlSymbolLarge InputSetMeasureReference; // 0x_
            // CUtlSymbolLarge InputSetTarget; // 0x_
            // CUtlSymbolLarge InputSetTargetReference; // 0x_
            // float InputSetTargetScale; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void CLogicMeasureMovementMeasureThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicMeasureMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicMeasureMovement) == 0x_);
    };
};
