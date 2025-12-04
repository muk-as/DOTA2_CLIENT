#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/IChoreoServices.hpp"
#include "source2sdk/client/IChoreoServices_ChoreoState_t.hpp"
#include "source2sdk/client/IChoreoServices_ScriptState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimGraph;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CScriptedSequence;
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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CGameChoreoServices : public source2sdk::client::IChoreoServices
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimGraph> m_hOwner;
            char m_hOwner[0x_]; // 0x_            
            // m_hScriptedSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CScriptedSequence> m_hScriptedSequence;
            char m_hScriptedSequence[0x_]; // 0x_            
            source2sdk::client::IChoreoServices_ScriptState_t m_scriptState; // 0x_            
            source2sdk::client::IChoreoServices_ChoreoState_t m_choreoState; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeStartedState; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameChoreoServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameChoreoServices) == 0x_);
    };
};
