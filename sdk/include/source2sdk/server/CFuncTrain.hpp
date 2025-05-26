#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlatTrain.hpp"
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
        // Size: 0x890
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncTrain : public source2sdk::server::CBasePlatTrain
        {
        public:
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x870            
            bool m_activated; // 0x874            
            uint8_t _pad0875[0x3]; // 0x875
            // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemy;
            char m_hEnemy[0x4]; // 0x878            
            float m_flBlockDamage; // 0x87c            
            source2sdk::entity2::GameTime_t m_flNextBlockTime; // 0x880            
            uint8_t _pad0884[0x4]; // 0x884
            CUtlSymbolLarge m_iszLastTarget; // 0x888            
            
            // Datamap fields:
            // void CFuncTrainWait; // 0x0
            // void CFuncTrainNext; // 0x0
            // void InputToggle; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTrain) == 0x890);
    };
};
