#pragma once


namespace My2chDepthCheck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Text;
	using namespace System::Xml;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Form1 �̊T�v
	///
	/// �x��: ���̃N���X�̖��O��ύX����ꍇ�A���̃N���X���ˑ����邷�ׂĂ� .resx �t�@�C���Ɋ֘A�t����ꂽ
	///          �}�l�[�W ���\�[�X �R���p�C�� �c�[���ɑ΂��� 'Resource File Name' �v���p�e�B��
	///          �ύX����K�v������܂��B���̕ύX���s��Ȃ��ƁA
	///          �f�U�C�i�ƁA���̃t�H�[���Ɋ֘A�t����ꂽ���[�J���C�Y�ς݃��\�[�X�Ƃ��A
	///          ���������݂ɗ��p�ł��Ȃ��Ȃ�܂��B
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  logView;
	protected: 
	private: System::Windows::Forms::DataGridView^  threadList;
	private: System::Windows::Forms::DataGridView^  watchList;
	private: System::Windows::Forms::TextBox^  board;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  warnDepth;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  relInterval;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  enter;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuCopyThreadList;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;

	private: System::Windows::Forms::ToolTip^  toolTip1;

	private: System::Windows::Forms::ToolStripMenuItem^  openInBrowserToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyURIToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  watchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  watchCopyURIToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  watchOpenInBrowserToolStripMenuItem;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  thOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  thId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  thTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  thRes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  keyword;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  match;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  res;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  depth;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  ignoneCase;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  enable;
	private: System::Windows::Forms::DataGridViewButtonColumn^  watchDelete;

	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�ϐ��ł��B
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->logView = (gcnew System::Windows::Forms::TextBox());
			this->threadList = (gcnew System::Windows::Forms::DataGridView());
			this->thOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->thId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->thTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->thRes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuCopyThreadList = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->openInBrowserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->watchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->watchOpenInBrowserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->watchCopyURIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyURIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->watchList = (gcnew System::Windows::Forms::DataGridView());
			this->keyword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->match = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->res = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->depth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ignoneCase = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->enable = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->watchDelete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->board = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->warnDepth = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->relInterval = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->enter = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->threadList))->BeginInit();
			this->contextMenuCopyThreadList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->watchList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->warnDepth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->relInterval))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// logView
			// 
			this->logView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->logView->Location = System::Drawing::Point(545, 43);
			this->logView->Multiline = true;
			this->logView->Name = L"logView";
			this->logView->ReadOnly = true;
			this->logView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->logView->Size = System::Drawing::Size(147, 205);
			this->logView->TabIndex = 9;
			this->logView->Text = L"2chDepthCheck\r\nd.1209060746";
			// 
			// threadList
			// 
			this->threadList->AllowUserToAddRows = false;
			this->threadList->AllowUserToDeleteRows = false;
			this->threadList->AllowUserToResizeColumns = false;
			this->threadList->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::AliceBlue;
			this->threadList->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->threadList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->threadList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->threadList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->thOrder, this->thId, 
				this->thTitle, this->thRes});
			this->threadList->Location = System::Drawing::Point(12, 37);
			this->threadList->MultiSelect = false;
			this->threadList->Name = L"threadList";
			this->threadList->ReadOnly = true;
			this->threadList->RowHeadersVisible = false;
			this->threadList->RowTemplate->Height = 21;
			this->threadList->Size = System::Drawing::Size(680, 138);
			this->threadList->TabIndex = 3;
			this->threadList->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Form1::threadList_CellMouseClick);
			this->threadList->SortCompare += gcnew System::Windows::Forms::DataGridViewSortCompareEventHandler(this, &Form1::threadList_SortCompare);
			this->threadList->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::threadList_CellDoubleClick);
			this->threadList->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::threadList_Paint);
			// 
			// thOrder
			// 
			this->thOrder->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->thOrder->HeaderText = L"No.";
			this->thOrder->Name = L"thOrder";
			this->thOrder->ReadOnly = true;
			this->thOrder->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->thOrder->Width = 50;
			// 
			// thId
			// 
			this->thId->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->thId->HeaderText = L"Thread ID";
			this->thId->Name = L"thId";
			this->thId->ReadOnly = true;
			this->thId->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->thId->Width = 80;
			// 
			// thTitle
			// 
			this->thTitle->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->thTitle->HeaderText = L"Thread Title";
			this->thTitle->Name = L"thTitle";
			this->thTitle->ReadOnly = true;
			// 
			// thRes
			// 
			this->thRes->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->thRes->HeaderText = L"Res";
			this->thRes->Name = L"thRes";
			this->thRes->ReadOnly = true;
			this->thRes->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->thRes->Width = 50;
			// 
			// contextMenuCopyThreadList
			// 
			this->contextMenuCopyThreadList->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->openInBrowserToolStripMenuItem, 
				this->toolStripSeparator2, this->watchToolStripMenuItem, this->watchOpenInBrowserToolStripMenuItem, this->watchCopyURIToolStripMenuItem, 
				this->toolStripSeparator1, this->copyToolStripMenuItem, this->copyURIToolStripMenuItem});
			this->contextMenuCopyThreadList->Name = L"contextMenuStrip1";
			this->contextMenuCopyThreadList->Size = System::Drawing::Size(247, 148);
			// 
			// openInBrowserToolStripMenuItem
			// 
			this->openInBrowserToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"���C���I", 9, System::Drawing::FontStyle::Bold));
			this->openInBrowserToolStripMenuItem->Name = L"openInBrowserToolStripMenuItem";
			this->openInBrowserToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->openInBrowserToolStripMenuItem->Text = L"&Open";
			this->openInBrowserToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openInBrowserToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(243, 6);
			// 
			// watchToolStripMenuItem
			// 
			this->watchToolStripMenuItem->Name = L"watchToolStripMenuItem";
			this->watchToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->watchToolStripMenuItem->Text = L"&Add to keywords";
			this->watchToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::watchToolStripMenuItem_Click);
			// 
			// watchOpenInBrowserToolStripMenuItem
			// 
			this->watchOpenInBrowserToolStripMenuItem->Name = L"watchOpenInBrowserToolStripMenuItem";
			this->watchOpenInBrowserToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->watchOpenInBrowserToolStripMenuItem->Text = L"Add to keywords && O&pen";
			this->watchOpenInBrowserToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::watchOpenInBrowserToolStripMenuItem_Click);
			// 
			// watchCopyURIToolStripMenuItem
			// 
			this->watchCopyURIToolStripMenuItem->Name = L"watchCopyURIToolStripMenuItem";
			this->watchCopyURIToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->watchCopyURIToolStripMenuItem->Text = L"Add to keywords && C&opy URI";
			this->watchCopyURIToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::watchCopyURIToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(243, 6);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->copyToolStripMenuItem->Text = L"&Copy title";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::copyToolStripMenuItem_Click);
			// 
			// copyURIToolStripMenuItem
			// 
			this->copyURIToolStripMenuItem->Name = L"copyURIToolStripMenuItem";
			this->copyURIToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->copyURIToolStripMenuItem->Text = L"Copy &URI";
			this->copyURIToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::copyURIToolStripMenuItem_Click);
			// 
			// watchList
			// 
			this->watchList->AllowUserToResizeRows = false;
			this->watchList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->watchList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->watchList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->keyword, this->id, 
				this->match, this->res, this->depth, this->ignoneCase, this->enable, this->watchDelete});
			this->watchList->Location = System::Drawing::Point(12, 3);
			this->watchList->Name = L"watchList";
			this->watchList->RowHeadersVisible = false;
			this->watchList->RowTemplate->Height = 21;
			this->watchList->Size = System::Drawing::Size(527, 245);
			this->watchList->TabIndex = 4;
			this->watchList->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::watchList_CellValueChanged);
			this->watchList->SortCompare += gcnew System::Windows::Forms::DataGridViewSortCompareEventHandler(this, &Form1::threadList_SortCompare);
			this->watchList->DefaultValuesNeeded += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &Form1::watchList_DefaultValuesNeeded);
			this->watchList->CurrentCellDirtyStateChanged += gcnew System::EventHandler(this, &Form1::watchList_CurrentCellDirtyStateChanged);
			this->watchList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::watchList_CellContentClick);
			// 
			// keyword
			// 
			this->keyword->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->keyword->HeaderText = L"Keyword";
			this->keyword->Name = L"keyword";
			this->keyword->ToolTipText = L"�X���b�h�̓���Ɏg���L�[���[�h";
			this->keyword->Width = 140;
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Visible = false;
			// 
			// match
			// 
			this->match->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->match->DefaultCellStyle = dataGridViewCellStyle2;
			this->match->HeaderText = L"Match";
			this->match->Name = L"match";
			this->match->ReadOnly = true;
			this->match->ToolTipText = L"�L�[���[�h����v�����X���b�h";
			// 
			// res
			// 
			this->res->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->res->HeaderText = L"Res";
			this->res->Name = L"res";
			this->res->ReadOnly = true;
			this->res->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->res->ToolTipText = L"���X��";
			this->res->Width = 50;
			// 
			// depth
			// 
			this->depth->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->depth->HeaderText = L"Depth";
			this->depth->Name = L"depth";
			this->depth->ReadOnly = true;
			this->depth->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->depth->ToolTipText = L"�X���b�h�[�x";
			this->depth->Width = 60;
			// 
			// ignoneCase
			// 
			this->ignoneCase->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->ignoneCase->HeaderText = L"a";
			this->ignoneCase->Name = L"ignoneCase";
			this->ignoneCase->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->ignoneCase->ToolTipText = L"�啶��/�����������";
			this->ignoneCase->Width = 21;
			// 
			// enable
			// 
			this->enable->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->enable->HeaderText = L"E";
			this->enable->Name = L"enable";
			this->enable->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->enable->ToolTipText = L"�x���[�x�ȉ��Ōx��";
			this->enable->Width = 21;
			// 
			// watchDelete
			// 
			this->watchDelete->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->watchDelete->HeaderText = L"��";
			this->watchDelete->Name = L"watchDelete";
			this->watchDelete->ReadOnly = true;
			this->watchDelete->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->watchDelete->Text = L"";
			this->watchDelete->ToolTipText = L"�Ď��Ώۂ���폜";
			this->watchDelete->Width = 23;
			// 
			// board
			// 
			this->board->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->board->Location = System::Drawing::Point(55, 12);
			this->board->Name = L"board";
			this->board->Size = System::Drawing::Size(608, 19);
			this->board->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Board:";
			// 
			// warnDepth
			// 
			this->warnDepth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->warnDepth->Location = System::Drawing::Point(545, 18);
			this->warnDepth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->warnDepth->Name = L"warnDepth";
			this->warnDepth->Size = System::Drawing::Size(70, 19);
			this->warnDepth->TabIndex = 6;
			this->warnDepth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {420, 0, 0, 0});
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(543, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 12);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Warn Depth";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(619, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 12);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Interval (s)";
			// 
			// relInterval
			// 
			this->relInterval->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->relInterval->Location = System::Drawing::Point(621, 18);
			this->relInterval->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {7200, 0, 0, 0});
			this->relInterval->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->relInterval->Name = L"relInterval";
			this->relInterval->Size = System::Drawing::Size(70, 19);
			this->relInterval->TabIndex = 8;
			this->relInterval->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// enter
			// 
			this->enter->AccessibleDescription = L"";
			this->enter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->enter->Location = System::Drawing::Point(669, 10);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(23, 23);
			this->enter->TabIndex = 2;
			this->enter->Text = L"��";
			this->enter->UseVisualStyleBackColor = true;
			this->enter->Click += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->threadList);
			this->splitContainer1->Panel1->Controls->Add(this->enter);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->board);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->watchList);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->warnDepth);
			this->splitContainer1->Panel2->Controls->Add(this->relInterval);
			this->splitContainer1->Panel2->Controls->Add(this->logView);
			this->splitContainer1->Size = System::Drawing::Size(704, 442);
			this->splitContainer1->SplitterDistance = 178;
			this->splitContainer1->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 442);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"2chDepthCheck";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_Closed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->threadList))->EndInit();
			this->contextMenuCopyThreadList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->watchList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->warnDepth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->relInterval))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 // �ݒ�Ǎ�
				 if(File::Exists("settings.xml")){
					 loadXmlFile();
				 }else{
					 logView->Text += "\r\n\r\nsettings.xml�쐬.";
				 }

				 // �^�C�}�[�J�n
				 timer1->Start();

				 // ToolTip
				 toolTip1->SetToolTip(board, "��URI");
				 toolTip1->SetToolTip(enter, "�ړ�/�����[�h");
				 toolTip1->SetToolTip(warnDepth, "�x���[�x");
				 toolTip1->SetToolTip(relInterval, "�����[�h�Ԋu");
			 }
	private: System::Void Form1_Closed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 // �ݒ�ۑ�
				 saveXmlFile();
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 // �C���^�[�o���X�V
				 Int32 newInterval = Decimal::ToInt32(relInterval->Value) *1000;
				 if(timer1->Interval != newInterval){
					 timer1->Interval = newInterval;
					 logView->Text += "\r\n\r\n�����[�h�Ԋu: " + (timer1->Interval /1000).ToString() + "�b";
					 logView->SelectionStart = logView->TextLength;
					 logView->ScrollToCaret();
				 }

				 // URI�����͂Ȃ璆�~
				 if(board->Text->IndexOf("http://") < 0){
					 return;
				 }

				 String^ response = "";
				 try{
					 // �G���R�[�h���w��
					 Encoding^ encode = Encoding::GetEncoding("Shift_JIS");

					 // �N���C�A���g�쐬
					 WebClient^ client = gcnew WebClient;
					 client->Headers->Add("User-Agent", "2chDepthCheck");
					 client->Encoding = encode;

					 // ���N�G�X�g���M
					 response = client->DownloadString(board->Text + "subject.txt");
				 }catch(WebException^ ex){
					 logView->Text += "\r\n\r\n�v���g�R���G���[:\r\n" + ex->Message;
					 logView->SelectionStart = logView->TextLength;
					 logView->ScrollToCaret();
					 return;
				 }

				 // �X���ꗗ�X�V
				 if(threadListUpdate(response)){
					 // �Ď��X���[�x�{��
					 watchListDepthCheck();
				 }
			 }
			 //
			 // �X���ꗗ����Ď��X���ǉ�
			 //
	private: System::Void watchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(threadList->CurrentCell == nullptr){
					 return;
				 }
				 setWatchList();
			 }
			 //
			 // �X���ꗗ����Ď��X���ǉ� & URI���R�s�[
			 //
	private: System::Void watchCopyURIToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(threadList->CurrentCell == nullptr){
					 return;
				 }
				 setWatchList();
				 Clipboard::SetText(getReadUriByThreadId(threadList["thId", threadList->CurrentCell->RowIndex]->Value->ToString()));
			 }
			 //
			 // �X���ꗗ����Ď��X���ǉ� & �u���E�U�ŊJ��
			 //
	private: System::Void watchOpenInBrowserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(threadList->CurrentCell == nullptr){
					 return;
				 }
				 setWatchList();
				 Diagnostics::Process::Start(getReadUriByThreadId(threadList["thId", threadList->CurrentCell->RowIndex]->Value->ToString()));
			 }
			 //
			 // �Ď��X���ǉ�
			 //
	private: System::Void setWatchList(){
				 // �X���b�h���擾
				 DataGridViewCell^ dgvc = threadList->SelectedCells[0];
				 String^ thTitle = threadList->Rows[dgvc->RowIndex]->Cells["thTitle"]->Value->ToString();
				 String^ thId = threadList->Rows[dgvc->RowIndex]->Cells["thId"]->Value->ToString();
				 String^ thOrder = threadList->Rows[dgvc->RowIndex]->Cells["thOrder"]->Value->ToString();

				 // �Ď��X�����X�g�ɒǉ�
				 watchList->Rows->Add(thTitle, thId, thTitle, thOrder, true, true);
			 }
			 //
			 // �X���^�C�R�s�[
			 //
	private: System::Void copyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(threadList->CurrentCell == nullptr){
					 return;
				 }
				 Clipboard::SetText(threadList["thTitle", threadList->CurrentCell->RowIndex]->Value->ToString());
			 }
			 //
			 // URI�R�s�[
			 //
	private: System::Void copyURIToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(threadList->CurrentCell == nullptr){
					 return;
				 }
				 Clipboard::SetText(getReadUriByThreadId(threadList["thId", threadList->CurrentCell->RowIndex]->Value->ToString()));
			 }
			 //
			 // �u���E�U�ŊJ��
			 //
	private: System::Void openInBrowserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(threadList->CurrentCell == nullptr){
					 return;
				 }
				 Diagnostics::Process::Start(getReadUriByThreadId(threadList["thId", threadList->CurrentCell->RowIndex]->Value->ToString()));
			 }
			 //
			 // �X���b�h�{��URI�擾
			 //
	private: System::String^ getReadUriByThreadId(String^ thId){
				 // ��URI����
				 String^ readUri = RegularExpressions::Regex::Replace(board->Text, "http://[^/]+/", "$&test/read.cgi/");
				 return(readUri + thId + "/");
			 }
			 //
			 // �X���ꗗ�̃\�[�g (�Ď��X���ꗗ�ł��g�p)
			 //
	private: System::Void threadList_SortCompare(System::Object^  sender, System::Windows::Forms::DataGridViewSortCompareEventArgs^ e){
				 if(e->Column->Name == "thOrder" || e->Column->Name == "thRes" || e->Column->Name == "depth"){
					 Int32 cellValueInt1, cellValueInt2;
					 Int32::TryParse(e->CellValue1->ToString(), cellValueInt1);
					 Int32::TryParse(e->CellValue2->ToString(), cellValueInt2);

					 e->SortResult = cellValueInt1 - cellValueInt2;
					 e->Handled = true;
				 }
			 }
			 //
			 // �X���ꗗ�`�掞�ɍs�S�̑I��
			 //
	private: System::Void threadList_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^ e){
				 if(threadList->CurrentCell == nullptr){
					 return;
				 }
				 threadList->Rows[threadList->CurrentCell->RowIndex]->Selected = true;
			 }
			 //
			 // �X���ꗗ�����_�u���N���b�N���ꂽ��
			 //
	private: System::Void threadList_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){
				 // �N���b�N�ꏊ���w�b�_�����~
				 if(e->ColumnIndex < 0 || e->RowIndex < 0){
					 return;
				 }
				 // �u���E�U�ŊJ��
				 Diagnostics::Process::Start(getReadUriByThreadId(threadList["thId", e->RowIndex]->Value->ToString()));
			 }
			 //
			 // �X���ꗗ�����E�N���b�N���ꂽ��
			 //
	private: System::Void threadList_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e){
				 // �N���b�N�ꏊ���w�b�_�����~
				 if(e->ColumnIndex < 0 || e->RowIndex < 0){
					 return;
				 }
				 if(e->Button == System::Windows::Forms::MouseButtons::Right){
					 // �E�N���b�N���I�� & �R���e�L�X�g���j���[
					 threadList[e->ColumnIndex, e->RowIndex]->Selected = true;
					 contextMenuCopyThreadList->Show(threadList->MousePosition);
				 }
			 }
			 //
			 // �X���ꗗ�̍X�V
			 //
	private: System::Boolean threadListUpdate(String^  response){
				 // ���X�g���N���A
				 threadList->Rows->Clear();

				 // No.
				 Int32 order = 1;
				 array<String^>^ subjectArray = response->Trim()->Split('\n');
				 array<String^>^ subjectData;
				 array<String^>^ separator = {"<>"};

				 // �X���b�h���Ƃ�No.�CID�C�^�C�g���C���X����ǉ�
				 for each(String^ item in subjectArray){
					 item = order.ToString() + "<>" + item;
					 item = RegularExpressions::Regex::Replace(item, "\\s\\((\\d+)\\)$", "<>$1");
					 subjectData = item->Split(separator, StringSplitOptions::RemoveEmptyEntries);

					 if(subjectData->Length == 4){
						 // Thread ID��.dat�����
						 subjectData[1] = subjectData[1]->Replace(".dat", "");

						 // Thread Title���`
						 subjectData[2] = subjectData[2]->Replace("&lt;", "<");
						 subjectData[2] = subjectData[2]->Replace("&gt;", ">");
						 subjectData[2] = subjectData[2]->Replace("&amp;", "&");

						 // ���X�g�ǉ�
						 threadList->Rows->Add(subjectData);
						 order++;
					 }else{
						 // subjectData�̒l��������Ȃ���
						 logView->Text += "\r\n\r\nsubject.txt�ǎ�s��.";
						 logView->SelectionStart = logView->TextLength;
						 logView->ScrollToCaret();
						 return 0;
					 }
				 }
				 return 1;
			 }
			 //
			 // �X���b�h�[�x�{��
			 //
	private: System::Void watchListDepthCheck(){
				 Int32 currRes;
				 Int32 currDepth;
				 Int32 warnDepthInt = Decimal::ToInt32(warnDepth->Value);
				 String^ keyword;
				 String^ thTitle;
				 array<String^>^ keywordsArray;
				 DataGridViewRow^ matchRow;
				 bool ignoneCase;
				 bool found, andMatch;
				 bool missAlarm = false,
					  newAlarm  = false,
					  moveAlarm = false,
					  warnAlarm = false;

				 // �����猟��������ׂɋt���\�[�g
				 threadList->Sort(threadList->Columns["thOrder"], ListSortDirection::Descending);

				 for each(DataGridViewRow^ watchListRow in watchList->Rows){
					 // �L�[���[�h������ or �ҏW�������̍s��
					 if(watchListRow->Cells["keyword"]->Value == nullptr || watchListRow->Cells["keyword"]->IsInEditMode){
						 continue;
					 }

					 // found�X�C�b�`���Z�b�g
					 found = false;

					 // �Z���w�i�F�����ɖ߂�
					 watchListRow->DefaultCellStyle->BackColor = System::Drawing::Color::Empty;

					 // �L�^�ς�ID�����鎞�����ID����v����X��������������
					 if(watchListRow->Cells["id"]->Value != nullptr){
						 for each(DataGridViewRow^ threadListRow in threadList->Rows){
							 if(watchListRow->Cells["id"]->Value->ToString() == threadListRow->Cells["thId"]->Value->ToString()){
								 // ID��v�X������������
								 Int32::TryParse(threadListRow->Cells["thRes"]->Value->ToString(), currRes);
								 if(currRes < 1000){
									 // ���X����1000�ȉ�����v�����s��ێ�
									 matchRow = threadListRow;
									 found = true;
								 }
								 // ���������烋�[�v����
								 break;
							 }
						 }
					 }

					 // �L�^��ID���� or ID��v�X������ or ID��v�X�����X��1000�ȏ�
					 // ���L�[���[�h����
					 if(!found){
						 // VB�֐��őS�p�����p
						 keyword = Strings::StrConv(watchListRow->Cells["keyword"]->Value->ToString(), VbStrConv::Narrow, 0);

						 // �召�������off���S�ď������ɕϊ�
						 ignoneCase = (bool)watchListRow->Cells["ignoneCase"]->Value;
						 if(!ignoneCase){
							 keyword = keyword->ToLower();
						 }

						 // and�����ׂ̈ɃX�y�[�X�ŋ�؂�
						 keywordsArray = keyword->Split(' ');

						 for each(DataGridViewRow^ threadListRow in threadList->Rows){
							 // �X���^�C�擾 & �S�e�����p
							 thTitle = Strings::StrConv(threadListRow->Cells["thTitle"]->Value->ToString(), VbStrConv::Narrow, 0);

							 // �召�������off���S�ď������ɕϊ�
							 if(!ignoneCase){
								 thTitle = thTitle->ToLower();
							 }

							 // �L�[���[�h��v�����邩
							 andMatch = true;
							 for each(keyword in keywordsArray){
								 if(thTitle->IndexOf(keyword) == -1){
									 // ���ł���v���Ȃ����false
									 andMatch = false;
									 break;
								 }
							 }

							 if(andMatch){
								 // �S�L�[���[�h��v�����X���𒲂ׂ�
								 Int32::TryParse(threadListRow->Cells["thRes"]->Value->ToString(), currRes);
								 if(currRes < 1000){
									 // 1000�ȉ�����v�����s��ێ����ă��[�v����
									 matchRow = threadListRow;
									 found = true;
									 break;
								 }else{
									 // 1000�ȏと��v�����s��ێ��D���[�v���s (���X�����������T��)
									 matchRow = threadListRow;
									 found = true;
								 }
							 }else{
								 // ��v���������̃X���b�h
								 continue;
							 }
						 }
					 }

					 // ����������
					 if(found){
						 if(watchListRow->Cells["id"]->Value == nullptr){
							 // �L�^��ID������newAlarm�X�C�b�`true
							 newAlarm = true;

							 logView->Text += "\r\n\r\n" + System::DateTime::Now.ToString("MM/dd HH:mm") + "\r\n";
							 logView->Text += "���V�K�Ď��X���b�h:\r\n";
							 logView->Text += matchRow->Cells["thTitle"]->Value->ToString() + " (" + matchRow->Cells["thId"]->Value->ToString() + ")";

							 // �Z���w�i�F�ύX
							 watchListRow->DefaultCellStyle->BackColor = System::Drawing::Color::LightYellow;

							 // ���Ď��X������ID�C�^�C�g�����L�^
							 watchListRow->Cells["id"]->Value = matchRow->Cells["thId"]->Value;
							 watchListRow->Cells["match"]->Value = matchRow->Cells["thTitle"]->Value;

						 }else if(watchListRow->Cells["id"]->Value->ToString() != matchRow->Cells["thId"]->Value->ToString()){
							 // �L�^�ς�ID�ƈ�v�����X���b�h��ID���Ⴄ����moveAlarm�X�C�b�`true
							 moveAlarm = true;

							 logView->Text += "\r\n\r\n" + System::DateTime::Now.ToString("MM/dd HH:mm") + "\r\n";
							 logView->Text += "���Ď��X���b�h�ڍs:\r\n";
							 logView->Text += watchListRow->Cells["match"]->Value->ToString() + " (" + watchListRow->Cells["id"]->Value->ToString();

							 // ���X�����Ď��X�����X�g�Ɏc���Ă���\��
							 logView->Text += watchListRow->Cells["res"]->Value != nullptr
								 ? ", " + watchListRow->Cells["res"]->Value->ToString() + "Res)"
								 : ")";

							 logView->Text += "\r\n�@��\r\n";
							 logView->Text += matchRow->Cells["thTitle"]->Value->ToString() + " (" + matchRow->Cells["thId"]->Value->ToString() + ")";

							 // �Z���w�i�F�ύX
							 watchListRow->DefaultCellStyle->BackColor = System::Drawing::Color::Honeydew;

							 // �Ď��X������ID�C�^�C�g�����L�^
							 watchListRow->Cells["id"]->Value = matchRow->Cells["thId"]->Value;
							 watchListRow->Cells["match"]->Value = matchRow->Cells["thTitle"]->Value;
						 }

						 // �Ď��X�����Ƀ��X���A�[�x���L�^
						 watchListRow->Cells["depth"]->Value = matchRow->Cells["thOrder"]->Value;
						 watchListRow->Cells["res"]->Value = matchRow->Cells["thRes"]->Value;

						 // ���l��r�p�Ɍ^�ϊ�
						 Int32::TryParse(watchListRow->Cells["depth"]->Value->ToString(), currDepth);

						 // �[�x��r
						 if(currDepth >= warnDepthInt){
							 // �Z���w�i�F�ύX
							 watchListRow->DefaultCellStyle->BackColor = System::Drawing::Color::AntiqueWhite;

							 // �[�x�Ď�on��warnAlarm�X�C�b�`true
							 if((bool)watchListRow->Cells["enable"]->Value){
								 warnAlarm = true;
								 logView->Text += "\r\n\r\n" + System::DateTime::Now.ToString("MM/dd HH:mm") + "\r\n";
								 logView->Text += "\r\n\r\n�I�x���[�x�X���b�h:\r\n";
								 logView->Text += matchRow->Cells["thTitle"]->Value->ToString() + " (" + matchRow->Cells["thId"]->Value->ToString() + ")";
							 }
						 }

					 }else{
						 // ������Ȃ���
						 if(watchListRow->Cells["id"]->Value != nullptr){
							 // �L�^��ID���聨missAlarm�X�C�b�`true
							 missAlarm = true;

							 logView->Text += "\r\n\r\n" + System::DateTime::Now.ToString("MM/dd HH:mm") + "\r\n";
							 logView->Text += "�~�X���b�h���������܂���:\r\n";
							 logView->Text += watchListRow->Cells["match"]->Value->ToString() + " (" + watchListRow->Cells["id"]->Value->ToString();

							 // ���X�����Ď��X�����X�g�Ɏc���Ă���\��
							 logView->Text += watchListRow->Cells["res"]->Value != nullptr
								 ? ", " + watchListRow->Cells["res"]->Value->ToString() + "Res)"
								 : ")";
						 }
						 watchListRow->Cells["id"]->Value = nullptr;
						 watchListRow->Cells["match"]->Value = nullptr;
						 watchListRow->Cells["res"]->Value = nullptr;
						 watchListRow->Cells["depth"]->Value = "NotFound.";
					 }
				 }

				 // �t���\�[�g�����ɖ߂�
				 threadList->Sort(threadList->Columns["thOrder"], ListSortDirection::Ascending);

				 if(missAlarm){
					 // missAlarm�X�C�b�`true���T�E���h�Đ�
					 if(File::Exists("miss.wav")){
						 System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("miss.wav");
						 player->Play();
					 }else{
						 // wave�t�@�C�����������~
						 logView->Text += "\r\n\r\nmiss.wav�������ł�.";
					 }
				 }else if(newAlarm){
					 // newAlarm�X�C�b�`true���T�E���h�Đ�
					 if(File::Exists("new.wav")){
						 System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("new.wav");
						 player->Play();
					 }else{
						 // wave�t�@�C�����������~
						 logView->Text += "\r\n\r\nnew.wav�������ł�.";
					 }
				 }else if(moveAlarm){
					 // moveAlarm�X�C�b�`true���T�E���h�Đ�
					 if(File::Exists("move.wav")){
						 System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("move.wav");
						 player->Play();
					 }else{
						 // wave�t�@�C�����������~
						 logView->Text += "\r\n\r\nmove.wav�������ł�.";
					 }
				 }else if(warnAlarm){
					 // warnAlarm�X�C�b�`true���T�E���h�Đ�
					 if(File::Exists("warn.wav")){
						 System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("warn.wav");
						 player->Play();
					 }else{
						 // wave�t�@�C�����������~
						 logView->Text += "\r\n\r\nwarn.wav�������ł�.";
					 }
				 }

				 logView->SelectionStart = logView->TextLength;
				 logView->ScrollToCaret();
			 }
			 //
			 // �Ď��L�[���[�h��ǉ�������
			 //
	private: System::Void watchList_DefaultValuesNeeded(System::Object^  sender, System::Windows::Forms::DataGridViewRowEventArgs^ e){
				 // �`�F�b�N�{�b�N�X�Ƀf�t�H���g�l������
				 e->Row->Cells["ignoneCase"]->Value = false;
				 e->Row->Cells["enable"]->Value = true;
			 }
			 // 
			 // �Ď��X���ꗗ�����N���b�N���ꂽ��
			 //
	private: System::Void watchList_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 // �N���b�N�ꏊ���w�b�_or�V�K�s�����~
				 if(e->ColumnIndex < 0 || e->RowIndex < 0 || watchList->Rows[e->RowIndex]->IsNewRow){
					 return;
				 }
				 if(watchList->Columns[e->ColumnIndex]->Name == "watchDelete"){
					 // watchDelete�̃{�^���������Ď��L�[���[�h�폜
					 watchList->Rows->RemoveAt(e->RowIndex);
				 }else if(watchList->Columns[e->ColumnIndex]->Name == "match"){
					 if(watchList->Rows[e->RowIndex]->Cells["id"]->Value != nullptr){
						 // match�����̃X���^�C�N���b�N���u���E�U�ŊJ��
						 Diagnostics::Process::Start(getReadUriByThreadId(watchList["id", e->RowIndex]->Value->ToString()));
					 }
				 }
			 }
			 //
			 // �Z�����e��ύX������
			 //
	private: System::Void watchList_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){
				 // �L�[���[�h�ύX���L�^��ID�ƃX���^�C�N���A
				 if(watchList->Columns[e->ColumnIndex]->Name == "keyword"){
					 watchList["id", e->RowIndex]->Value = nullptr;
					 watchList["match", e->RowIndex]->Value = nullptr;
				 }
			 }
			 //
			 // �`�F�b�N�{�b�N�X��ύX������
			 //
	private: System::Void watchList_CurrentCellDirtyStateChanged(System::Object^  sender, System::EventArgs^ e){
				 // �R�~�b�g
				 if(watchList->IsCurrentCellDirty){
					 watchList->CommitEdit(DataGridViewDataErrorContexts::Commit);
				 }
			 }
			 //
			 // XML�ɕۑ�
			 //
	private: System::Void saveXmlFile(){
				 // XML�쐬
				 XmlDocument^ saveXml = gcnew XmlDocument;
				 XmlDeclaration^ xmlDecl = saveXml->CreateXmlDeclaration("1.0", "UTF-8", nullptr);
				 saveXml->AppendChild(xmlDecl);
				 XmlElement^ rootNode = saveXml->CreateElement("_2chDepthCheck");
				 rootNode->SetAttribute("xmlns:xsd", "http://www.w3.org/2001/XMLSchema");
				 rootNode->SetAttribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");

				 // �ݒ�m�[�h
				 XmlElement^ settingsNode = saveXml->CreateElement("Settings");

				 // �ݒ�m�[�h->��URI
				 XmlElement^ boardNode = saveXml->CreateElement("Board");
				 boardNode->AppendChild(saveXml->CreateTextNode(board->Text));
				 settingsNode->AppendChild(boardNode);

				 // �ݒ�m�[�h->�x���[�x
				 XmlElement^ warnDepthNode = saveXml->CreateElement("WarnDepth");
				 warnDepthNode->AppendChild(saveXml->CreateTextNode(warnDepth->Text));
				 settingsNode->AppendChild(warnDepthNode);

				 // �ݒ�m�[�h->�����[�h����
				 XmlElement^ relIntervalNode = saveXml->CreateElement("RelInterval");
				 relIntervalNode->AppendChild(saveXml->CreateTextNode(relInterval->Text));
				 settingsNode->AppendChild(relIntervalNode);

				 rootNode->AppendChild(settingsNode);

				 // �Ď��X���m�[�h
				 for each(DataGridViewRow^ saveRow in watchList->Rows){
					 // �����͍s���X�L�b�v
					 if(saveRow->IsNewRow){
						 continue;
					 }

					 // �L�[���[�h�������X�L�b�v
					 if(saveRow->Cells["keyword"]->Value == nullptr){
						 continue;
					 }

					 // �m�[�h�Ɋi�[
					 XmlElement^ watchThreadNode = saveXml->CreateElement("WatchThread");

					 // �Ď��X���m�[�h->�L�[���[�h
					 XmlElement^ keywordNode = saveXml->CreateElement("Keyword");
					 keywordNode->AppendChild(saveXml->CreateTextNode(saveRow->Cells["keyword"]->Value->ToString()));
					 watchThreadNode->AppendChild(keywordNode);

					 // �Ď��X���m�[�h->ID
					 XmlElement^ idNode = saveXml->CreateElement("Id");
					 if(saveRow->Cells["id"]->Value != nullptr){
						 idNode->AppendChild(saveXml->CreateTextNode(saveRow->Cells["id"]->Value->ToString()));
					 }
					 watchThreadNode->AppendChild(idNode);

					 // �Ď��X���m�[�h->��v�X���^�C
					 XmlElement^ matchNode = saveXml->CreateElement("Match");
					 if(saveRow->Cells["match"]->Value != nullptr){
						 matchNode->AppendChild(saveXml->CreateTextNode(saveRow->Cells["match"]->Value->ToString()));
					 }
					 watchThreadNode->AppendChild(matchNode);

					 // �Ď��X���m�[�h->�召�������
					 XmlElement^ ignoneCaseNode = saveXml->CreateElement("IgnoneCase");
					 ignoneCaseNode->AppendChild(saveXml->CreateTextNode(saveRow->Cells["ignoneCase"]->Value->ToString()));
					 watchThreadNode->AppendChild(ignoneCaseNode);

					 // �Ď��X���m�[�h->�L��
					 XmlElement^ enableNode = saveXml->CreateElement("Enable");
					 enableNode->AppendChild(saveXml->CreateTextNode(saveRow->Cells["enable"]->Value->ToString()));
					 watchThreadNode->AppendChild(enableNode);

					 rootNode->AppendChild(watchThreadNode);
				 }

				 // �ۑ�
				 saveXml->AppendChild(rootNode);
				 saveXml->Save("settings.xml");
				 logView->Text += "\r\n\r\n�ݒ�ۑ�.";
				 logView->SelectionStart = logView->TextLength;
				 logView->ScrollToCaret();
			 }
			 //
			 // XML����Ǎ�
			 //
	private: System::Void loadXmlFile(){
				 // XML�쐬
				 XmlDocument^ loadXml = gcnew XmlDocument();
				 loadXml->Load("settings.xml");

				 // ���[�g�m�[�h
				 XmlElement^ rootNode = loadXml->DocumentElement;

				 // �ݒ�m�[�h�Ǎ�
				 XmlNode^ settingsNode = rootNode->FirstChild;
				 XmlElement^ boardNode = (XmlElement^)settingsNode->FirstChild;
				 XmlElement^ warnDepthNode = (XmlElement^)boardNode->NextSibling;
				 XmlElement^ relIntervalNode = (XmlElement^)warnDepthNode->NextSibling;

				 board->Text = boardNode->FirstChild->Value;
				 warnDepth->Text = warnDepthNode->FirstChild->Value;
				 relInterval->Text = relIntervalNode->FirstChild->Value;

				 // �Ď��X���m�[�h�Ǎ�
				 XmlElement^ keywordNode;
				 XmlElement^ idNode;
				 XmlElement^ matchNode;
				 XmlElement^ ignoneCaseNode;
				 XmlElement^ enableNode;
				 String^ id;
				 String^ match;
				 Int32 loadThreadCount = 0;
				 bool ignoneCaseBool, enableBool;

				 for(XmlNode^ watchThreadNode = settingsNode->NextSibling;
					 watchThreadNode != nullptr;
					 watchThreadNode = watchThreadNode->NextSibling){
						 keywordNode = (XmlElement^)watchThreadNode->FirstChild;
						 idNode = (XmlElement^)keywordNode->NextSibling;
						 matchNode = (XmlElement^)idNode->NextSibling;
						 ignoneCaseNode = (XmlElement^)matchNode->NextSibling;
						 enableNode = (XmlElement^)ignoneCaseNode->NextSibling;

						 id = idNode->FirstChild == nullptr ? nullptr : idNode->FirstChild->Value->ToString();
						 match = matchNode->FirstChild == nullptr ? nullptr : matchNode->FirstChild->Value->ToString();

						 ignoneCaseBool = ignoneCaseNode->FirstChild->Value == "True" ? true : false;
						 enableBool = enableNode->FirstChild->Value == "True" ? true : false;

						 // �Ď��X�����X�g�ɒǉ� (�L�[���[�h, ID, ��v�X��, ���X��(null), �[�x(null), �召����, �L��)
						 watchList->Rows->Add(keywordNode->FirstChild->Value, id, match, nullptr, nullptr, ignoneCaseBool, enableBool);
						 loadThreadCount++;
				 }
				 logView->Text += "\r\n\r\n" + loadThreadCount.ToString() + "�̃L�[���[�h��Ǎ��݂܂���.";
				 logView->SelectionStart = logView->TextLength;
				 logView->ScrollToCaret();
			 }
	};
}
